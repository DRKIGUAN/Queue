#include"LQueue.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
extern a[100],m,point;
void InitLQueue(LQueue *Q);
Status EnLQueue(LQueue *Q, void *data);
Status DeLQueue(LQueue *Q);
void DestoryLQueue(LQueue *Q);
void ClearLQueue(LQueue *Q);
Status IsEmptyLQueue(const LQueue *Q);
Status GetHeadLQueue(LQueue *Q, void *e);
int LengthLQueue(LQueue *Q);
void LPrint(void *q);
Status TraverseLQueue(const LQueue *Q, void (*foo)(void *q));

void InitLQueue(LQueue *Q)
{  Q->front=NULL;
   Q->rear=NULL;
}

Status EnLQueue(LQueue *Q, void *data)
{ Node*p=(Node*)malloc(sizeof(Node));
  if(a[m]==1)memcpy(p->data,data,sizeof(int));
  if(a[m]==2)memcpy(p->data,data,sizeof(double));
  if(a[m]==3)memcpy(p->data,data,sizeof(char));
  p->next=NULL;
  if(Q->front=NULL)
  {
      Q->front=p;
      Q->rear=p;
      Q->length=Q->length+1;
      return TRUE;
  }
  Q->rear->next=p;
  Q->rear=p;
  Q->length=Q->length+1;
  return TRUE;
}

Status DeLQueue(LQueue *Q)
{
  if(Q->length==0)return FALSE;
  Node*p;
  p=Q->front;
  Q->front=Q->front->data;
  free(p);
  return TRUE;
}


void DestoryLQueue(LQueue *Q)
{
    if(Q->length==0)return FALSE;
    Node*p;
    while(Q->length)
    {
        p=Q->front;
        Q->front=Q->front->next;
        free(p);
        Q->length=Q->length-1;
    }
      return TRUE;
}

void ClearLQueue(LQueue *Q)
{
   if(Q->length==0)return FALSE;
    Node*p;
    while(Q->length)
    {
        p=Q->front;
        Q->front=Q->front->next;
        free(p);
        Q->length=Q->length-1;
    }
      return TRUE;
}

Status IsEmptyLQueue(const LQueue *Q)
{
    if(Q->length==0){printf("THE Queue is empty\n");return TRUE;}
    return FALSE;
}

Status GetHeadLQueue(LQueue *Q, void *e)
{   if(IsEmptyLQueue(Q))return FALSE;
    e=Q->front->data;
    return TRUE;
}

int LengthLQueue(LQueue *Q)
{
    return Q->length;
}

void LPrint(void *q)
{
  if(point==1)printf("%d",*((int*)q));
  if(point==2)printf("%lf",*((double*)q));
  if(point==3)printf("%c",*((char*)q));
}

Status TraverseLQueue(const LQueue *Q, void (*foo)(void *q))
{   int i=0;
    Node*p=Q->front;
    for(;a[i]!=0;i++)
    {point=a[i];
    (*foo)(p->data);
    p=p->next;}
}



