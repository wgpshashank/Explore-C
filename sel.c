// Selection sort


#include<stdio.h>

void selection_sort(int a[],int n)
{
unsigned int j,i,temp;
 for(i=1;i<=n;i++)
 {
   
   for(j=i+1;j<=n;j++)
   {
    if(a[j]<a[i]){
   
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
   }
   
}
}
 printf("\n Sorted array\n");
for(i=1;i<=n;i++)
 printf("%d\n",a[i]);
 
 }
    


int main()
{
 unsigned int a[10000],i,n;
 printf("\n Enter the Number of elements\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++){
  a[i]=rand()%1000;
  printf("%d\n",a[i]);
 }
 selection_sort(a,n);
 
 return 0;
 
 }
 
 
