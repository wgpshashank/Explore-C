#include<stdio.h>
int main()
{
	int n;
	char str[100];;
	scanf("%s",str);
	sscanf(str,"%x",&n);
	printf("%d",n);
	return 0;
}
