#include<stdio.h>
void rev(char *);
int main()
{
	char str[100]="This is Rajeev";
	rev(str);
	return 0;
}
void rev(char *t)
{
	if(*t)
	{
	rev(t+1);
	}
	printf("%c",*t);
}

