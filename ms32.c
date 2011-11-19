#include<stdio.h>
main()
{
int i = 257;
int *iPtr = &i;
printf("%d %d", *((char*)iPtr), *((char*)iPtr+1) );
}
