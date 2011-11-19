#include<stdio.h>
void foo()
{
	printf("\n hi1");

	void f1()
	{
		printf("\n hi");

	}
	f1();
}

int main()
{
	foo();
	return 0;
}

