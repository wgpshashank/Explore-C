#include<stdio.h>

int main(void)
{
 int p = 1122 , q = 1455 ;
 int *p1 = &p;
 int *q1 = &q;
 int c = *p1-*q1;
 printf("%d\n",c);
 return 0;
 }


