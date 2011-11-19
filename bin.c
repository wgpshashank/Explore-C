// Binary search

#include<stdio.h>
#include<stdlib.h>

int binary_search(int a[],int low,int key,int high)
{
 unsigned int mid,midVal;
 while(low<=high)
 {
  mid = ((unsigned)low+(unsigned)high) >> 1;
  //mid = low+((high+low)/2);
  printf("\n Mid Index %d",mid);
  midVal = a[mid];
  if(midVal<key)
   low = mid+1;
  else if(midVal>key)
   high = mid-1; 
  else
   return mid; 
  }
  return -1;
 }  

int main()
{
 unsigned int a[1000000],i,key,n,b,d;
 printf("\n Enter the Number of elements ");
 scanf("%d",&n);
 if(n==0){
  printf("\n No Elements" );
  exit(0);
  }
 
    
 printf("\n Elements of the array \n");
 for(i=1;i<=n;i++)
 {
  a[i]=i;
  printf("\n%u",a[i]);
  }
 printf("\n enter the key value");
  scanf("%d",&key);
 b= binary_search(a,1,key,n);
 if(b==-1)
  printf("\n Key not found\n");
 else
  printf("\n Key found at position \n%d\n", b);
 
 return 0;
 }
