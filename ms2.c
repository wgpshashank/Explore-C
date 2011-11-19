#include<stdio.h>
#define CUBE(x) (x)*(x)*(x)

int main()
{
 int a=2,b;
 b = CUBE(++a);
 printf("%d\n",a);
 printf("%d\n",b);
 return 0;
 }
 
 //++a is the problem
 
 // 80 isa answ
