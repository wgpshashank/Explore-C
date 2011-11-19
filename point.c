
#include<stdio.h>

int maxdiff(int *arr,int len)
{
    int diff=0,i,j;
    int p;
    
    for(i=0;i<len;i++)
    {
      for(j=i;j<len;j++)
      {
         p= arr[i]-arr[j];
         if((p-diff)>0)
  
          diff=p;                
      }
     }
                     
   return diff;
    }
   

void main()
{
      int p,arr[6]={22,44,12,64,21,4},len;
      len= sizeof(arr)/sizeof(arr[0]);
      printf("%d\n",len);
      p=maxdiff(arr,len);
            printf("\n MAX Diff is \t %d",p);
   
}

