#include<stdio.h>
void main()
{
 int n,q,a[100000]={0},b[100000],c[100000],d[100000],i,count,j;
 scanf("%d%d",&n,&q);
 for(i=0;i<q;i++) scanf("%d%d%d",&b[i],&c[i],&d[i]);
 for(i=0;i<q;i++)
   if(b[i]==0)
   {
    for(j=c[i];j<=d[i];j++)
     a[j]=a[j]+1;
   }
    else
    {
     count =0;
     for(j=c[i];j<=d[i];j++)
      if(a[j]%3==0)
       count++;
     printf("%d\n",count);
     } 
    }
  
 
