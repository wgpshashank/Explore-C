#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
 int i=0;
 i= i+strlen(argv[1]);
 printf("%d\n",i);
 while(i>0)
 {
  i--;
  printf("%c",argv[1][i]);
 }
 printf("\n");
 return 0;
}
