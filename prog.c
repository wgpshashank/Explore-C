#include<stdio.h>
void main(){
   signed x;
   unsigned y;
   x = 10 +- 10u + 10u +- 10;
   y = x;
   if(x==y)
        printf("%d %d",x,y);
   else if(x!=y)
        printf("%u  %u",x,y);
}