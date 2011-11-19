#include<stdio.h>


int findMax(int *arr , int len)
{
 int i;
 int max = arr[0];
 for(i=0;i<len;i++)
 {
  if(arr[i]>=max)
   max= arr[i];
  }
  printf("%d\n",max);
return max;
}


int findMin(int *arr ,int len)
{
 int min,i;
 for(i=0;i<len;i++)
 {
  min=arr[0];
  if(arr[i]<arr[i+1])
   min= arr[i];
  }
  printf("%d\n",min);
return min;
}


int main()
{
 int arr[]={0,609,211,432,31,2222},len,p,m=0,n=0;
 len = sizeof(arr)/sizeof(arr[0]);
 n = findMax(arr,len);
 m = findMin(arr,len);
 p = n-m;
 printf("\n The Maximum Difference is\n");
 printf("%d\n",p);
 return 0;
}
 
