#include<stdio.h>
#include<string.h>
main()
{

char str[80];
strcpy(str,"siva");
scanf("%[india]",str); // searches for characters not in input containing i/p then if finds one stops by printing till then
// example if rajeev it prints junk because of r
// if circumflex is used for rajeev o/p is r
printf("%s\n",str);


}
