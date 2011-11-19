#include<stdio.h>
typedef struct
{
      char *name;
       double salary;
}job;

main()
{
    static job a={"tcs",15000.0};
    static job b={"ibm",25000.0};
    static job c={"google",35000.0};
    int x=5;
    job *arr[3]={&a,&b,&c};
     printf("%s%f\t",2[*arr]);
}
