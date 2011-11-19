#include<stdio.h>

struct empty{};

int main()
{
 struct empty e1;
 int e;
 e = sizeof(e1);
 printf("%d\n",e);
 return 0;
}
 
