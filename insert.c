#include<stdio.h>

void insertion_sort(unsigned int *a,unsigned int n)
{

unsigned int i,j,key;
 for(j=1;j<n;++j)
 {
  key = a[j];
  i = j-1;
  while((i>=0) && (a[i]>key))
  {
   a[i+1] = a[i];
   i = i-1;
  }
 a[i+1] = key;
 }
  
  printf("\n Sorted array\n");
  for(i=0;i<n;i++)
   printf("%u\n",a[i]);
 
  }



int main()
{
 unsigned int a[1000],i,j,n;
 printf("\n enter the Number of elements\n");
 scanf("%u",&n);
 for(i=0;i<n;i++){
  a[i]=rand()%1000;
  printf("%u\n",a[i]);
 }
 
 
 insertion_sort(a,n);
 
 return 0;
 }
  
