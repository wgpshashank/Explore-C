#include<stdio.h>
int main()
{
 int x=10;
 while(x=x--) //98 ....0 if --x 98.....1
 printf("%d",x);
 //getchar();
 return 0;
}
