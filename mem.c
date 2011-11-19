#include<stdio.h>
#include<string.h>
int main()
{
 char str[]="This is rajeev\n";
 char str1[10];
 memset(str,'0',4);
 printf("%s",str);
 memcpy(str1,str,10);

 printf("\n this is string 1\n");
 printf("%s\n",str1);
 return 0;
}
