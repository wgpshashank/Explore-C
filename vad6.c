#include<stdio.h>

int main()
{
	struct xx
	{
		int a;
		char x[10];
	}
	;

	struct xx *p;

	printf("\n %d",p->a);
	printf("\n %s ",p->x);
	return 0;
}

