#include<stdio.h>
#include<stdlib.h>

int i;
typedef struct ll
{
  int data;
  struct ll *left;
  struct ll *right;
} node;

node *root1=NULL; // the root node

void insert(node *root,int n)
{
  if(root==NULL) //for the first(root) node
  {
    root=(node *)malloc(sizeof(node));
    root->data=n;
    root->right=NULL;
    root->left=NULL;
  }
  else
  {
    if(n<(root->data))
    {
      root->left=(node *)malloc(sizeof(node));
      insert(root->left,n);
    }
    else if(n>(root->data))
    {
      root->right=(node *)malloc(sizeof(node));
      insert(root->right,n);
    }
    else
    {
      root->data=n;
    }
  }
}

void inorder(node *root)
{
  if(root!=NULL)
  {
    inorder(root->left);
    printf("%d  ",root->data);
    inorder(root->right);
  }
}

main()
{
  int n,choice=1;
  while(choice!=0)
  {
    printf("Enter choice--- 1 for insert, 3 for inorder and 0 for exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
        printf("Enter number to be inserted\n");
        scanf("%d",&n);
        insert(root1,n);
        break;
      case 3:
        inorder(root1);
        break;
      default:
        break;
    }
  }
}
