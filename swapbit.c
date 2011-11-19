#include<stdio.h>
int main()
{
 int x=4,y;
 y = ((x & 0x55)<<1) | ((x>>1)& 0x55);
 printf("\n%x",y);
 return 0;
 }
 
 // Example 4 is 01 00
 // swaps and the answeris 10 00 so 8 
 
  
