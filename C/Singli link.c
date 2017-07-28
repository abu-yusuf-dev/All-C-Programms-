#include<stdio.h>
int main()
{

//int NULL;
void insert_at_beg()
{
struct node *new_node,*current;

struct node=(struct node *)malloc(sizeof(struct node));

 if(new_node == NULL)
    printf("nFailed to Allocate Memory");

 printf("nEnter the data : ");
 scanf("%d",&new_node->data);
 new_node->next=NULL;

   if(start==NULL)
   {
   start=new_node;
   current=new_node;
   }
   else
   {
   new_node->next=start;
   start=new_node;
   }
}
}
