#include<stdio.h>
int main()
{
int i=10;
int j=20;
int *a,*b;
a =&i;
b=&j;
printf("before""%d%d\n",*a,*b);
*a^=*b;
*b^=*a;
*a^=*b;
printf("after""%d%d",*a,*b);
return 0;
}
