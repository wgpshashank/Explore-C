#include<stdio.h>
int main() {
	  const int i = 0;
	    int * p ;
	      p = (int *) & i;
	        *p = 2;
		  printf("(i,p): %x %x \n",&i,p);
		    printf("(i,p): %d %d \n",i,*p);
}
