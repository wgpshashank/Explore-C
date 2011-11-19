#include<stdio.h>
#include<string.h>

int hash(char *s)
{
 int result=0,i;
 int len = strlen(s);
 printf("\n %d",len);
 
 for(i=0;i<len;i++)
 {
  if(strcmp((char *)s[i],"A")==0)
  result++;
 }
 printf("\n Result=%d\n",result);
 return 0;
 }
 


int main()
{
 int i,c;
 int test,a[1000],e[1000],v[1000];
 char s[100];
 printf("\n Number of test cases \n");
 scanf("%d",&test);
 printf("\n Enter the values of A ,E and V in order ");
 for(i=0;i<test;i++)
 {
 scanf("%d",&a[i]);
 scanf("%d",&e[i]);
 scanf("%d",&v[i]);
 }
 printf("\n Enter the Binary String\n");
 scanf("%s",s);
 c = hash(s);
 return 0;
 }
