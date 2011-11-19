#include<stdio.h>
int main()
{
	float a=5.375;
	char *p;
	int i;
	p = (char *)&a;
	for(i=0;i<=3;i++)
		printf("%X\n",(unsigned char)p[i]);
	return 0;
}
