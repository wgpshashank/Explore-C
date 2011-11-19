#include<stdio.h>
#ifdef getchar         //this expression is evaluated to zero.....why is so happening ??........getchar is defined as macro in stdio.h.....i mean else part shouldn't be executed which is happening
#undef getchar
#else
#define getchar scanf("%c",&ch);
#endif
main()
{
	char ch;
	int c;
	c=getchar;
	printf("%d",c);
}
