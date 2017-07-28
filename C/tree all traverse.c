#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *leftchild;
    struct node *rightchild;
};
struct node *root = NULL;

void insert(int data){
    struct node *tempnode=(struct node*) malloc(sizeof(struct node*));
    struct node *current;
    struct node *parent;

    tempnode->data=data;
    tempnode->leftchild=NULL;
    tempnode->rightchild=NULL;
    if(root == NULL){
     root=tempnode;
    }else{
    current=root;
    parent=NULL;
    while(1){
        parent=current;
        if(data<parent->data){
            current=current->leftchild;

            if(current==NULL){
                parent->leftchild=tempnode;
                return;
            }
        }
        else{
            current=current->rightchild;
            if(current==NULL){
                parent->rightchild=tempnode;
                return;
            }
        }

    }
        }


}
void preorder(struct node* root){
    if(root!=NULL){
        printf(" %d \n",root->data);
        preorder(root->leftchild);
        preorder(root->rightchild);

    }
    }
    void inorder(struct node* root) {
   if(root != NULL) {
      inorder(root->leftchild);
      printf("%d \n",root->data);
      inorder(root->rightchild);
   }
}


    void postorder(struct node* root){
    if(root!=NULL){

        postorder(root->leftchild);
        postorder(root->rightchild);
        printf(" %d\n ",root->data);

    }
    }
int main()
{
    int array[7]={27, 14, 35, 10, 19, 31, 42};
    int i;
    for(i=0;i<7;i++)
        insert(array[i]);
    printf("pre order Traversal:\n");
    preorder(root);

    printf("In order Traversal:\n");
    inorder(root);

    printf("post order Traversal:\n");
    postorder(root);




  return 0;
}
