#include<stdio.h>


struct emp
{
char name[20];
int age;
};
f(struct emp ee)
{
printf("%s ...%d\n",ee.name,ee.age);
}
main()
{
struct emp e={"qwe",12};
f(e);
}

