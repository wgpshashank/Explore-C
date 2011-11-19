
// Concatenation operator ##

#include<stdio.h>
#define SQUARE(x,y) x##y
int main()
{
 int val1=10;
 int val13=20;

  printf("%d",SQUARE(val1,3));

 return 0;
 }
