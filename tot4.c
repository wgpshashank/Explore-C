#include<stdio.h>
int main( )
{
	char *q;
	int j;
	for (j=0; j<3; j++) 
		scanf("%s" ,(q+j));
	for (j=0; j<3; j++) 
		printf("%c" ,*(q+j));
	for (j=0; j<3; j++) 
		printf("%s" ,(q+j));
return 0;

}

