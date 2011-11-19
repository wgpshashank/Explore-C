
#include<stdio.h>

//#define a 10
void abc();
int main()
{
//	printf("\n%d",a);
	abc();
#undef a
//#define a 20
	printf("\n %d",a);
}
void abc()
	   {
//		    #undef a
			       #define a 40
			                 printf("\n %d",a);
		     
		      }

