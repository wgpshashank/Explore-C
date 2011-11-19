#include<stdio.h>
int main()
{
	int ret;
	ret=fork();

	ret=fork();
	
	ret=fork();
	ret=fork();


	if(!ret)
		printf("One");
	else
		printf("two");
}
