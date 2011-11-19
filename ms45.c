#include<stdio.h>
int main()
{
struct xx
{
 int x;
 struct yy
 {
  char s;
  struct xx *p;
 }a;
struct yy *q;
};
return 0;
}

