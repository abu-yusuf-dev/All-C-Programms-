#include <stdio.h>
#include<malloc.h>
struct student{
 int Roll;
 char Name[10];
 float Marks;
 struct student *Next; //Here Next is the Student type of pointer variable

}*Head,*Tail;
char ch;
int main()
{
    struct student *Sptr;

    int c=0;
    while((ch!='N')&&(ch!='n'))
    {
        Sptr = (struct student*)malloc(sizeof(struct student));
        printf("\n Record to be  Inserted   ");
        printf("\n Enter A Roll :");
        scanf("%d",&Sptr->Roll);
        printf("\n Enter A Name ");
        scanf("%s",&Sptr->Name);
        printf("Enter your marks :");
        scanf("%f",&Sptr->Marks);
        Sptr->Next = NULL;



        if(!Head)
        {
            Head = Sptr;
            Tail = Sptr;

        }
        else
        {
            Tail->Next = Sptr;
            Tail= Sptr;
            Tail->Next=NULL;


        }
        printf("\n Wanna Insert one more?n/N for no:");



        Sptr = Head;
        if(!Sptr)
            printf("\n Empty List ");

        printf("\n Contents of the list are follows:");


        while(Sptr){

            ++c;
            printf("\n %d,%5d,%20s,%10.2f",c,Sptr->Roll,Sptr->Name,Sptr->Marks);
            Sptr= Sptr->Next;

        }

    }


}
