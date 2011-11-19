#include<stdio.h>
int main()
{
 unsigned int x,y,z,n,t,i;

  scanf("%u",&t);
 for(i=0;i<t;i++){
  scanf("%u",&n);
    x=5;
    y=0;
   while(x<=n)
   {
    z=n/x;
    y=y+z;
    x=5*x;
   }
   printf("\n%u\n",y);
  }
          
 return 0;
 } 
