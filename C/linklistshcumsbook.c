#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<process.h>
//Structure declaration for the node
struct node
{
int info;
struct node *link;
}*start;
//This function will create a new linked list
void Create_List(int data)
{
struct node *q,*tmp;
//Dynamic memory is been allocated for a node
tmp= (struct node*)malloc(sizeof(struct node));
tmp->info=data;
tmp->link=NULL;
if(start==NULL) /*If list is empty*/
start=tmp;
else
{ /*Element inserted at the end*/
q=start;
while(q->link!=NULL)
q=q->link;
q->link=tmp;
}

}/*End of create_list()*/
//This function will add new element at the beginning of the linked list
void AddAtBeg(int data)
{
struct node *tmp;
tmp=(struct node*)malloc(sizeof(struct node));
tmp->info=data;
tmp->link=start;
start=tmp;
}/*End of addatbeg()*/
//Following function will add new element at any position
void AddAfter(int data,int pos)
{
struct node *tmp,*q;
int i;
q=start;
//Finding the position to add new element to the linked list
for(i=0;i<pos-1;i++)
{
q=q->link;
if(q==NULL)
{
printf ("\n\n There are less than %d elements",pos);
getch();
return;
}
}/*End of for*/
tmp=(struct node*)malloc(sizeof (struct node));
tmp->link=q->link;
tmp->info=data;
q->link=tmp;
}/*End of addafter()*/
//Delete any element from the linked list
void Del(int data)
{
struct node *tmp,*q;
if (start->info == data)
{

tmp=start;
start=start->link; /*First element deleted*/
free(tmp);
return;
}
q=start;
while(q->link->link != NULL)
{
if(q->link->info == data) /*Element deleted in between*/
{
tmp=q->link;
q->link=tmp->link;
free(tmp);
return;
}
q=q->link;
}/*End of while */
if(q->link->info==data) /*Last element deleted*/
{
tmp=q->link;
free(tmp);
q->link=NULL;
return;
}
printf ("\n\nElement %d not found",data);
getch();
}/*End of del()*/
//This function will display all the element(s) in the linked list
void Display()
{
struct node *q;
if(start == NULL)
{
printf ("\n\nList is empty");
return;
}
q=start;
printf("\n\nList is : ");
while(q!=NULL)
{
printf ("%d ", q->info);
q=q->link;

}
printf ("\n");
getch();
}/*End of display() */
//Function to count the number of nodes in the linked list
void Count()
{
struct node *q=start;
int cnt=0;
while(q!=NULL)
{
q=q->link;
cnt++;
}
printf ("Number of elements are %d\n",cnt);
getch();
}/*End of count()*/
//This function will reverse the linked list
void Rev()
{
struct node *p1,*p2,*p3;
if(start->link==NULL) /*only one element*/
return;
p1=start;
p2=p1->link;
p3=p2->link;
p1->link=NULL;
p2->link=p1;
while(p3!=NULL)
{
p1=p2;
p2=p3;
p3=p3->link;
p2->link=p1;
}
start=p2;
}/*End of rev()*/
//Function to search an element from the linked list
void Search(int data)
{

struct node *ptr = start;
int pos = 1;
//searching for an element in the linked list
while(ptr!=NULL)
{
if (ptr->info==data)
{
printf ("\n\nItem %d found at position %d", data, pos);
getch();
return;
}
ptr = ptr->link;
pos++;
}
if (ptr == NULL)
printf ("\n\nItem %d not found in list",data);
getch();
}
void main()
{
int choice,n,m,position,i;
start=NULL;
while(1)
{
clrscr();
printf ("1.Create List\n");
printf ("2.Add at beginning\n");
printf ("3.Add after \n");
printf ("4.Delete\n");
printf ("5.Display\n");
printf ("6.Count\n");
printf ("7.Reverse\n");
printf ("8.Search\n");
printf ("9.Quit\n");
printf ("\nEnter your choice:");
scanf ("%d",&choice);
switch (choice)
{
case 1:
printf ("\n\nHow many nodes you want:");
scanf ("%d",&n);

for(i = 0;i<n;i++)
{
printf ("\nEnter the element:");
scanf ("%d",&m);
Create_List(m);
}
break;
case 2:
printf ("\n\nEnter the element : ");
scanf ("%d",&m);
AddAtBeg(m);
break;
case 3:
printf ("\n\nEnter the element:");
scanf ("%d",&m);
printf ("\nEnter the position after which this element is inserted:");
scanf ("%d",&position);
AddAfter(m,position);
break;
case 4:
if (start == NULL)
{
printf("\n\nList is empty");
continue;
}
printf ("\n\nEnter the element for deletion:");
scanf ("%d",&m);
Del(m);
break;
case 5:
Display();
break;
case 6:
Count();
break;
case 7:
Rev();
break;
case 8:
printf("\n\nEnter the element to be searched:");
scanf ("%d",&m);

Search(m);
break;
case 9:
exit(0);
default:
printf ("\n\nWrong choice");
}/*End of switch*/
}/*End of while*/
}/*End of main()*/
