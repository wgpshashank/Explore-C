#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	p = (int *)alloca(10000);
	p[88]=100;
	printf("%d",p[100]);
	return 0;
}
