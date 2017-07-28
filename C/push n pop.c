#include<stdio.h>
#include<conio.h>
int  a[5],top=-1,i;
void push(int value)
{
    if(top==4)
    {
        printf("\n The Stack is full ");
    }
        else
        {
            top=top+1;
            a[top]=value;
        }

}
void pop()
{
    if(top==-1)
    {
        printf("\n Stack is Empty ");
    }
    else
    {
        top=top-1;

    }
}
void display()
{
    for(i=0;i<=top;i++){
        printf("\n Array is :\n%d",a[i]);
    }
}
int main()
{
    int choice,value;
    do{
    printf("\n1.push :");
    printf("\n2.pop :");
    printf("\n3.Display :");
    printf("\n0.Exit :");
    printf("\nEnter Your choice :");
    if(choice==1)
    {
        printf("\n Enter value to be Inserted :");
        scanf("%d",&value);
        push(value);
    }
    if(choice==2)
    {
        pop();
    }
    if(choice==3)
    {
        display();
    }
    if(choice==0)
    {
        exit(1);
    }
     }while(choice!=0);
    getch();

 return 0;

}
