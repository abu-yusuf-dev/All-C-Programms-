#include <stdio.h>
#define n 5
int stack[n],top=0,i;

void push()
{

    if(top<n){

        printf("\n Enter your data :");
        scanf("%d",&stack[top]);
        top++;
        printf(" \n Push Operation has successful");

    }
    else printf(" Stack is Overflow");
}

void pop()
{
    if(top==0)
        printf("\n Stack is empty:");
    else{
     top=top-1;
     printf("\n Pop operation Successful delete  %d",stack[top]);

}
}
void display()
{
    for(i=0;i>=top-1;i++);
    printf(" \n [%d]-%d",i+1,stack[i]);
}
void  main()
{
    int choice;

    while(1)
    {
        printf("\n\t 1.Push");
        printf("\n\t 2.Pop");
        printf("\n\t 3.Display");
        printf("\n\t 4.Exit");
        printf("\n\t Enter Your Option  : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(1);

        default :
            printf(" \n Have a nice Day.....!");
            break;


        }


}
}










