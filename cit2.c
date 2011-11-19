#include<stdio.h>
int main()
{
	int a[3]={0,1,2};
	printf("%d",(int)&a[3]-(int)&a[0]);
	return 0;
}
