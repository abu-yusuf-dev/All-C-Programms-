#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
struct node *pre;
int data;
struct node *next;
};
struct node *head,*head1,*ptr,*ptr1,*ptr2,*ptr3;
void main()
{
	clrscr();
	int n,i,a,b,c,d;
	printf("input your first data\n");
	scanf("%d",&n);
	ptr=(node *)malloc(sizeof(node));
	head=ptr;
	ptr->pre=NULL;
	ptr->data=n;
	ptr->next=NULL;
	for(;;){
	printf("input your choice\n");
	scanf("%d",&i);
	if(i==1){
	printf("i am in first insertion\n");
	printf("input your data\n");
	scanf("%d",&b);
	ptr1=(node *)malloc(sizeof(node));
	head->pre=ptr1;
	ptr1->next=head;
	ptr1->data=b;
	ptr1->pre=NULL;
	head=ptr1;
	}
	else if(i==2){
	printf("i am in mid insertion\n");
	printf("after which value do you want to insert\n");
	scanf("%d",&c);
	printf("input your data\n");
	scanf("%d",&d);
	ptr=(node *)malloc(sizeof(node));
	ptr1=head;
	while(ptr1->data!=c){
	ptr1=ptr1->next;
	}
	ptr3=ptr1->next;
	ptr1->next=ptr;
	ptr->pre=ptr1;
	ptr->data=d;
	ptr->next=ptr3;
	ptr3->pre=ptr;
	}
	else if(i==3){
	printf("i am in last insertion\n");
	printf("input your data\n");
	scanf("%d",&a);
	ptr1=(node *)malloc(sizeof(node));
	ptr2=head;
	while(ptr2->next!=NULL){
	ptr2=ptr2->next;
	}
	ptr2->next=ptr1;
	ptr1->pre=ptr2;
	ptr1->data=a;
	ptr1->next=NULL;
	}
	else if(i==4){
	printf("i am in display\n");
	ptr3=head;
	printf("The head address is:%d\n",ptr3);
	do{
	printf("%d  %d  %d\n",ptr3->pre,ptr3->data,ptr3->next);
	ptr1=ptr3->next;
	ptr3=ptr3->next;
	}
	while(ptr1!=NULL);
	}
	else if(i==5){
	printf("i am in split\n");
	printf("after which data do you want to split\n");
	scanf("%d",&n);
	ptr1=head;
	while(ptr1->data!=n){
	ptr1=ptr1->next;
	}
	head1=ptr1->next;
	ptr1->next=NULL;
	head1->pre=NULL;
	}
	else if(i==6){
	printf("i am in display of splited data\n");
	printf("The head address of first linked list is %d\n",head);
	ptr1=head;
	do{
	printf("%d  %d  %d\n",ptr1->pre,ptr1->data,ptr1->next);
	ptr2=ptr1->next;
	ptr1=ptr1->next;
	}
	while(ptr2!=NULL);
	printf("The head address of scond linked list is %d\n",head1);
	ptr1=head1;
	do{
	printf("%d  %d  %d\n",ptr1->pre,ptr1->data,ptr1->next);
	ptr2=ptr1->next;
	ptr1=ptr1->next;
	}
	while(ptr2!=NULL);
	}
	else if(i==7){
	printf("i am in merge\n");
	ptr=head;
	while(ptr->next!=NULL){
	ptr=ptr->next;
	}
	ptr->next=head1;
	head1->pre=ptr;
	}
	else if(i==8){
	printf("i am in first delete\n");
	head=head->next;
	head->pre=NULL;
	}
	else if(i==9){
	printf("i am in mid delete\n");
	printf("which data do you want to delete\n");
	scanf("%d",&a);
	ptr1=head;
	while(ptr1->data!=a){
	ptr2=ptr1;
	ptr1=ptr1->next;
	}
	ptr1=ptr1->next;
	ptr1->pre=ptr2;
	ptr2->next=ptr1;
	}
	else if(i==10){
	printf("i am in last delete\n");
	ptr1=head;
	while(ptr1->next!=NULL){
	ptr2=ptr1;
	ptr1=ptr1->next;
	}
	ptr2->next=NULL;
	}
	else
	break;
	}
	getch();
}

