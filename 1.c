#include<stdio.h>
#include<math.h>

// Exponent Function
long temp_exp(long a,long b)
{
 long i,c=1;
 for(i=1;i<=b;i++)
 {
 c = c*a;
 printf("%d Power of %ld---> %ld\n",i,a,c);
 }
 return c;

}


 


int main()
{
long a,b;
printf("\n ENter a value ");
scanf("%d",&a);
printf("\n ENter b value ");
scanf("%d",&b);
 long c = temp_exp(a,b);
 printf("\n Final result\n");
 printf("%ld\n",c);
 return 0;
}





















