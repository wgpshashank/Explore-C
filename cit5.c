#include<stdio.h>
#include<stdlib.h>
int main()
{
	fork();
	printf("\n Fork1 ");
	fork()&&fork()||fork();
        printf("Fork 2 ");
	fork();
	printf("Fork3 ");




	return 0;
}
