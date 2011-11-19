#include<stdio.h>
//smallest quine
main()
{
       	char *s="main() { char *s=%c%s%c; printf(s,34,s,34); }"; 
	printf(s,34,s,34); 
}

//Quines are the programs which print themselves //////
/
