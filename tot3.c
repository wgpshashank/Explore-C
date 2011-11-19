#include<stdio.h>
int main() 
{ 
	char ch[]="ABCD"; 
	char *s; 
	s=ch; 
	printf("%c",*s++); 
	printf("%c",*++s); 
	printf("%c",++*s); 
} 
