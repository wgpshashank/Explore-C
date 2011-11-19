// Linked List Basic Implementation :)


#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node* link;
};
 
struct node* InsertFront(struct node* head)
{

 struct node* newNode = malloc(sizeof(struct node )) ;
 newNode->data = 5;
 newNode->link=head;
 head = newNode;
 return head;
}
 
 int LengthList(struct node* head)
 {
  int count=0;
  struct node* cur ;
  cur = head ;
  while(cur!=NULL)
  {
   count++;
   cur=cur->link;
  }
  return count;
 }
  
 
 
 struct node* LinkedList()
 {
 struct node* head= NULL;
 struct node* second = NULL;
 struct node* third = NULL;
 
 head = malloc(sizeof(struct node));
 second = malloc(sizeof(struct node));
 third = malloc(sizeof(struct node));
 
 head->data = 1;
 head->link=second;
 
 second->data=2;
 second->link=third;
 
 third->data=3;
 third->link=NULL;
 
 printf("\n Head !! %d -%p ------>!! ",head->data,head->link);
 printf("\n second !! %d - %p !! --------> ",second->data,second->link);
 printf("\n third !! %d - %p --------- >!! \n",third->data,third->link);
 
 return head;
 }
 
int main()
{
// Building the Linked List
struct node* res = LinkedList();

int length = LengthList(res);

// Length of the Linked List
printf("\n Length of the Linked List is %d\n",length);

// Inserting Node in the front

struct node* new = InsertFront(res);

length = LengthList(res);

printf("New Node data %d",new->data);
printf("\n New Node points to %p",new->link);

//printf("\n %p\n",res->link);
return 0;
} 
 
 
