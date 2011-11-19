#include<stdio.h>
#include<stdlib.h>
int main()
{
 unsigned char ch;
 FILE *fp;
 fp = fopen("abc","r");
 if(fp==NULL)
 {
  printf("Unable to Open");
  exit(1);
 }
 while((ch = fgetc(fp)!=EOF))
  printf("%c",ch);
 fclose(fp);
 printf("\n",ch);
 return 0;
}
