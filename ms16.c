#include<stdio.h>
int main()
{
 unsigned int num;
 int c=0;
 scanf("%u",&num);
for(;num;num>=1)
{
 num & 1;
 c++;
}
printf("%d",c);
 return 0;
 }
  
