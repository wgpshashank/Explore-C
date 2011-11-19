#include<stdio.h>
struct demo
{
	char c;
	double i;
	float j;
};

int main()
{
 struct demo s;
 printf("Size is %d",sizeof(s));
 return 0;
}


