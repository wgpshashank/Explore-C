// Swapping using xor only usinfg ints 
#include<stdio.h>
int main()
{
 int a=10,b=5;
 a^=b^=a^=b ;
 printf("\n %d\n%d\n",a,b);
 return 0;
}
