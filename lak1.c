#include<stdio.h>
// sizeof structure without using sizeof()
struct abc
{
	short int c;
	int a;
	float b;
};
int main()
{

	
	
	size_t size = (size_t)(((struct abc *)0)+1);
	printf("%d\n",sizeof(main()));
	printf("%d",size);
	
	
	return 0;
}
