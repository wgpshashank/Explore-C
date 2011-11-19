#include<stdio.h>
#include<string.h>

main()
{
char *p,*q;
p=(char *)malloc(25);
q=(char*) malloc(25);
strcpy(p,"amazon" );
strcpy(q,"hyd");
strcat(p,q);
printf("%s",p);
}
