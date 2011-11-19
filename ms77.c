#include<stdio.h>
int main()
{
       char *str = "junk";
       scanf ("%[Hi]", str);
       printf ("%s\n", str);
       return 0;
}
