#include<stdio.h>
#include<stdlib.h>

struct tree
{
 int data;
 struct tree *llink,*rlink;
};


struct tree* newNode(int data)
{

struct tree* newNode;
 newNode =  malloc(sizeof(struct tree));
 newNode->data = data;
 newNode->llink = NULL;
 newNode->rlink = NULL;
 
 return(newNode);

}

struct tree* insert(struct tree *pt,int data)
{
 if(pt==NULL)
  return (newNode(data));
  
  else
  {
   if(data<=pt->data) pt->llink = insert(pt->llink,data);
   else pt->rlink = insert(pt->rlink,data);
   
   return(pt);
   
   }
  }
 

 


int main()
{
 struct tree t;
 int data;
 printf("\n enter the data");
 scanf("%d",&data);
 insert(&t,data); 
 
 return 0;
 
 }
 

