#include<stdio.h>
#include"LQueue.h"
#include"Lqueue.c"
#include<string.h>
#include<stdlib.h>
int a[100],m=0,point=0;
void main()
{ int i=0,j=0;
  int*one;double*two;char*three;Status flag;
  void*tmp;void (*foo)(void *q);
  foo=LPrint;
  for(;m<100;m++)
  a[m]=0;
  m=0;
  LQueue l;
  LQueue*Q=&l;
  InitLQueue(Q);
  printf("������в���10��Ԫ��\n");
  for(;i<10;i++,m++)
  {
     printf("��������Ԫ�ذ�1�����븡���Ͱ�2�������ַ��Ͱ�3\n");
     scanf("%d",&a[m]);
     printf("����������\n");
     if(a[m]==1)one=(int*)malloc(sizeof(int)),scanf("%d",one),tmp=one,EnLQueue(Q,tmp);
     if(a[m]==2)two=(double*)malloc(sizeof(double)),scanf("%lf",two),tmp=two,EnLQueue(Q,tmp);
     if(a[m]==3)three=(char*)malloc(sizeof(char)),scanf("%c",three),tmp=three,EnLQueue(Q,tmp);
  }
    printf("�����е�ֵΪ��");
      TraverseLQueue(Q,foo);
      for(i=0;i<5;i++)
      {DeLQueue(Q);
      for(j=0;a[j]!=0;j++)
      a[j]=a[j+1];
      }
      printf("5��Ԫ�س��Ӻ󣬶����е�ֵΪ��");
      TraverseLQueue(Q,foo);
     printf("��ͷΪ��");
     GetHeadLQueue(Q,tmp);
     point=a[0];
     LPrint(tmp);
}
