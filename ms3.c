#include<stdio.h>

 void abc(int a)
 {
  if(a>0)
  {
   printf("\n Before print\n");
   printf("%d\n",a);
   abc(--a);
   printf("%d\n",a);
   abc(--a);
   printf("%d\n\n",a);
   printf("after print\n");
   }
  }
  int main()
  {
   abc(3);
   return 0;
   }
   
