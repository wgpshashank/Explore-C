#include<stdio.h>
#include<stdlib.h>
#define STACK_SIZE 100


struct stack
{
 int top;
 int items[STACK_SIZE];
};


int empty(struct stack *ps)
{
 if(ps->top == -1)
 return 1;
 else
 return 0;
}



int pop(struct stack *ps)
{
 if(empty(ps)){
  printf("Stack Underflow");
  exit(1); 
  }
 
 return (ps->items[ps->top--]);
}



void push(struct stack *ps , int elem)
{
 if(ps->top == STACK_SIZE-1)
 {
  printf("Overflow");
  exit(1);
 }
 else
 ps->items[++(ps->top)]=elem;
 return;
}


int main()
{
 struct stack s;
 int x,w;

 
 push(&s,20);
 

 x = pop(&s);
 printf("\n the popped element is %d\n",x);
 push(&s,10);
 x=pop(&s);
 printf("\n the popped element is %d\n",x);
 return 0;
 }
 
 
 
 
  
