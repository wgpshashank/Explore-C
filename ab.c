#include<stdio.h>
void red()
{
printf("Hi");
}
void green()
{
printf("Bye");
}
int main()
{
	     fork();
	          int color=fork();
		       if(color==0)
			                        fork();
		            red();
			         if(color==0)
					                  fork();
				      green();
return 0;

}
