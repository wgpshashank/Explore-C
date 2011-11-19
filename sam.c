#include<stdio.h>
int incr(int);
int main()
{
	int m=10,p;
	p=incre(incre(incre(m++)));
		printf("%d", *&p);
	return 0;
}
int incre(int m)
{
	m+=2;
	return(m-2);
}
