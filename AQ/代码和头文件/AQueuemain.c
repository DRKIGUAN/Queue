#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"AQueue.h"
#include"AQueue.c"
int a[10],m,point;
 void main()
{ AQueue l;
  AQueue*Q=&l;
  int*one;double*two;char*three;int i=0,j=0;
  void*tmp;void (*foo)(void *q);
  foo=APrint;
  for(;m<10;m++)
  a[m]=0;
  InitAQueue(Q);
  printf("������в���10��Ԫ��\n");
   for(;i<10;i++,m++)
  {
     printf("��������Ԫ�ذ�1�����븡���Ͱ�2�������ַ��Ͱ�3\n");
     scanf("%d",&a[m]);
     printf("����������\n");
     if(a[m]==1)one=(int*)malloc(sizeof(int)),scanf("%d",one),tmp=one,EnAQueue(Q,tmp);
     if(a[m]==2)two=(double*)malloc(sizeof(double)),scanf("%lf",two),tmp=two,EnAQueue(Q,tmp);
     if(a[m]==3)three=(char*)malloc(sizeof(char)),scanf("%c",three),tmp=three,EnAQueue(Q,tmp);
  }
  printf("�����е�ֵΪ��");
  TraverseAQueue(Q,foo);
  for(i=0;i<5;i++)
      {DeAQueue(Q);
      for(j=0;a[j]!=0;j++)
      a[j]=a[j+1];
      }
       printf("5��Ԫ�س��Ӻ󣬶����е�ֵΪ��");
      TraverseAQueue(Q,foo);
       printf("��ͷΪ��");
     GetHeadAQueue(Q,tmp);
     point=a[0];
     APrint(tmp);
}
