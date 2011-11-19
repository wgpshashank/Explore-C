#include<stdio.h>
int main()
{
int i,j;
for(i=0,j=i++;j>i;j++,i++) 
{ 
printf("%d%d",i,j);
} 
return 0;

}
