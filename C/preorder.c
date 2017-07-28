#include "stdio.h"
int main(){


void preorder_stack(Node root){
        stack ms;
        ms.top = -1;
        int i;

        if(root == NULL) return ;

        Node * temp ;
        /* Step 1 : Start with root */
        push(&ms,root);

        while(!is_empty(ms)){
               /* Step 5 : Pop the node */
                temp = pop(&ms);
               /* Step 2 : Print the node */
                printf("output  : %d  ", temp->value);

               /* Step 3: Push right child first */
                if(temp->right){
                        push(&ms, temp->right);
                }
                /* Step 4: Push left child */
                if(temp->left){
                        push(&ms, temp->left);
                }
        }


}
}
