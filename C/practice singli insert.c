#include "stdio.h"
#include "stdlib.h"
struct node{
    int data;
    struct node* next;

};
 struct node* head;

void Insert(int x){
struct node* temp=(struct node*)malloc(sizeof(struct node));
temp->data=x;
temp->next=head;
head=temp;


}
print(){

struct node* temp=head;
printf("List are :");
while(temp !=NULL){
    printf("\t%d",temp->data);
temp=temp->next;

}

printf("\n");




}

int main()
{
  int n,i,x;
  head = NULL;
    printf("how many numbers ?\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
       printf("Enter the numbers :");
        scanf("%d",&x);


    Insert(x);
    print();

}
}
