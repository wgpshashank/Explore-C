#include<stdio.h>
int main(){
	   char str[]="abcd";
	      int i;

	         for(i=0;i<6;i++){
			            str[i]^=str[6-i];
				               }
		            printf("\n%s",str);
			               
				                  return 0;
}
