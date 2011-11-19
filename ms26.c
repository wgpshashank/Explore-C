#include<stdio.h>
main()
{
 int  a[5] = {1,2,3,4,5};
 int *ptr =  (int*)(&a+1); // inc by the whole array

 printf("%d %d" , *(a+1), *(ptr-1) );
printf("%d",a);
}
