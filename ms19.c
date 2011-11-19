#include<stdio.h>
int * fun(int a1,int b)
{
    int a[2];
    a[0]=a1;
    a[1]=b;
    //int c=5;
    printf("%x\n",&a[0]);
    return a;
    }
int main()
{
    int *r=fun(3,5);
    printf("%d\n",r[0]);
    printf("%d\n",r[0]);
}
