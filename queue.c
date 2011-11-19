#include<stdio.h>
#include<stdlib.h>
#define QUEUE_SIZE 10


struct queue
{
 int front,rear;
 int items[QUEUE_SIZE];
};

int empty(struct queue *pq)
{
 if(pq->front == pq->rear)
 return 0;
 else
 return 1;
}

void enqueue(struct queue *pq,int elem)
{
 if(pq->rear == QUEUE_SIZE-1)
 {
  printf("\n Overflow condition\n");
  exit(1);
 }
 else
 {
  pq->items[pq->rear]=elem;
  (pq->rear)++;
 }}



int dequeue(struct queue *pq)
{
 if(!empty(pq))
 {
  printf("\n underflow\n");
  exit(1);
 }
 else
 return(pq->items[(pq->front)]);
 (pq->front)++;
 }
 
 
int main()
{
 struct queue q;
 q.front=0,q.rear=0;
 
 int x;
 enqueue(&q,10);
 enqueue(&q,20);


 x = dequeue(&q);
 printf("\n element dequeued = %d",x);
  x = dequeue(&q);
 printf("\n element dequeued = %d",x);
 return 0;

 }
  
