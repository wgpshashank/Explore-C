#include<stdio.h>
int main()
{
 char **p="Hello";
 printf("%d%d%d",p,*p,**p);
 return 0;
}
