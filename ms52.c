#include<stdio.h>
#ifdef getchar
#undef getchar
#else
#define getchar scanf("%c",&ch);
#endif
main()
{
        char ch;
        int c;
        c=getchar;
        printf("%d",c);
}
