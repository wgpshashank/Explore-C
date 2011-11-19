#include<stdio.h>

int main()
{

int x,a,b,i,n;
printf("\n Enter the value of n");
scanf("%d",&n);
printf("\n Enter Psoitive integer a");
scanf("%d",&a);
printf("\n Enter the positisve integer b");
scanf("%d",&b);
for(i=1;i<=15;i++)
{
 n= (a*n + b);
 printf("%d\n",n);
}
return 0;
 
 }
