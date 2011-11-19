#include<stdio.h>
char * reverse(char  *str,int i ,int j)
{
while(i<j)
{

str[i]=str[i]^str[j];
str[j]=str[i]^str[j];
str[i]=str[i]^str[j];
i++;j--;
}
return str;
}

int main ()
{
char str[]="rajeev";
printf("%s",reverse(str,0,sizeof(str)-2));
return 0;
}
