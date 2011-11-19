#include<stdio.h>

int main()
{
    int I =10, j=2;
    int *ip = &I ;
    int *jp = &j;
    int k = (*ip) / (*jp);
    printf("%u",k);

    return 0;
}
