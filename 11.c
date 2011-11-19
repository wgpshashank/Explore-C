#include<stdio.h>

void test(int a)
{
if(a>0){
 test(--a);
 printf("%d",a);
test(--a);
}}


int main()
{
int a=3;
test(a);
return 0;
}
 
