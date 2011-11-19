#include<stdio.h>
main()
{
     static int  a[]={5,10,15,20};
     int * ptr=a;
     int ** ptr_ptr=&ptr;
      printf("\n %d",**ptr_ptr++);
      printf("\n %d",**ptr_ptr);
}

