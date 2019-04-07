#include"AQueue.h"
extern a[10],m,point;
void InitAQueue(AQueue *Q);
void DestoryAQueue(AQueue *Q);
Status IsFullAQueue(const AQueue *Q);
Status IsEmptyAQueue(const AQueue *Q);
Status GetHeadAQueue(AQueue *Q, void *e);
int LengthAQueue(AQueue *Q);
Status EnAQueue(AQueue *Q, void *data);
Status DeAQueue(AQueue *Q);
void ClearAQueue(AQueue *Q);
Status TraverseAQueue(const AQueue *Q, void (*foo)(void *q));
Status TraverseAQueue(const AQueue *Q, void (*foo)(void *q));

void InitAQueue(AQueue *Q)
{
  Q->front=0;
  Q->rear=0;
  Q->length=0;
}

Status EnAQueue(AQueue *Q, void *data)
{
  if((Q->rear+1)%10==Q->front)return FALSE;
  if(a[m]==1)memcpy(Q->data[Q->rear],data,sizeof(int));
  if(a[m]==2)memcpy(Q->data[Q->rear],data,sizeof(double));
  if(a[m]==3)memcpy(Q->data[Q->rear],data,sizeof(char));
  Q->length++;
  return TRUE;
}


Status DeAQueue(AQueue *Q)
{
  if(Q->front==Q->rear)return FALSE;
  Q->front=(Q->front+1)%10;
  return TRUE;
}

void DestoryAQueue(AQueue *Q)
{
      free(Q);
      return TRUE;
}

void ClearAQueue(AQueue *Q)
{
      free(Q);
      return TRUE;
}


Status IsEmptyAQueue(const AQueue *Q)
{
      if(Q->front==Q->rear)return TRUE;
      return FALSE;
}

Status IsFullAQueue(const AQueue *Q)
{ if((Q->rear+1)%10==Q->front)return TRUE;
  return FALSE;
}


Status GetHeadAQueue(AQueue *Q, void *e)
{ if(Q->front==Q->rear)return FALSE;
  if(a[0]==1)memcpy(e,Q->data[Q->front],sizeof(int));
  if(a[0]==2)memcpy(e,Q->data[Q->front],sizeof(double));
  if(a[0]==3)memcpy(e,Q->data[Q->front],sizeof(char));
  return TRUE;
}

void APrint(void *q)
{
  if(point==1)printf("%d",*((int*)q));
  if(point==2)printf("%lf",*((double*)q));
  if(point==3)printf("%c",*((char*)q));
}

Status TraverseAQueue(const AQueue *Q, void (*foo)(void *q))
{   int i=0;
    int count=0;
    for(;a[i]!=0;i++)
    {point=a[i];
    (*foo)(Q->data[count]);
    count++;}
}


