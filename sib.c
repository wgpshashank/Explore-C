#include<stdio.h>
int main()
{
	int i;
	scanf("%d",&i);
	switch(i)
	{
		case 1 ... 7 : printf("1 to 7");
			     break;

		case 8 ... 13 :printf("8 to 13");
			       break;
		default: printf("\n Elsewhere");
			 break;
	}
	return 0;
}
