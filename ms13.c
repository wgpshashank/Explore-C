#include<stdio.h>
int main()
{
 unsigned int m=0xffff;
 ~m;
 printf("%x\n",m);
 return 0;
}


//ffffffdf
