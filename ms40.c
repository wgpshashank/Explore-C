#include<stdio.h>
int main(int argc,char *argv[])
{
 char const* s="";
 char str[]="hello";
 s=str;
 while(*s){
           printf("%c",*s++);
           }
          

  
  return 0;
}
