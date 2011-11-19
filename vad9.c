#include<stdio.h>

int dim(int a[])

{
	
	return sizeof(&a)/sizeof(int);
}

int main()
{
	int arr[10];
	int a[10]={2,3,4};
	void *p=a;
	int * p1=a;
	p1++;
	p++;

	printf("\n %d %d ",p1,p);
		printf("\n %d  %d ",*p1,*p);

	printf("\n %d",sizeof(arr)/sizeof(int));

	return 0;
}


