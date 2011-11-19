#include <stdio.h>
#include <stdlib.h>
 
/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
 
struct node* newNode(int );
 
/* Function to find least comman ancestor of n1 and n2 */
int leastCommanAncestor(struct node* root, int n1, int n2)
{
  /* If we have reached a leaf node then LCA doesn't exist
     If root->data is equal to any of the inputs then input is
     not valid. For example 20, 22 in the given figure */
  if(root == NULL || root->data == n1 || root->data == n2)
    return -1; 
 
  /* If any of the input nodes is child of the current node
     we have reached the LCA. For example, in the above figure
     if we want to calculate LCA of 12 and 14, recursion should
     terminate when we reach 8*/
  if((root->right != NULL) &&
    (root->right->data == n1 || root->right->data == n2))
    return root->data;
  if((root->left != NULL) &&
    (root->left->data == n1 || root->left->data == n2))
    return root->data;    
 
  if(root->data > n1 && root->data < n2)
    return root->data;
  if(root->data > n1 && root->data > n2)
    return leastCommanAncestor(root->left, n1, n2);
  if(root->data < n1 && root->data < n2)
    return leastCommanAncestor(root->right, n1, n2);
}    
 
/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct node* newNode(int data)
{
  struct node* node = (struct node*)
                       malloc(sizeof(struct node));
  node->data  = data;
  node->left  = NULL;
  node->right = NULL;
 
  return(node);
}
 
/* Driver program to test mirror() */
int main()
{
  struct node *root  = newNode(2);
  root->left         = newNode(1);
  root->right        = newNode(4);
  root->right->left  = newNode(3);
  root->right->right = newNode(5); 
 
/* Constructed binary search tree is
            2
           / \
         1   4
             / \
           3   5
*/
  printf("\n The Least Common Ancestor is \n");
  printf("%d", leastCommanAncestor(root, 1, 5));
 
  getchar();
  return 0;
}
