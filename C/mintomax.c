#include<stdio.h>
int main()
{
    int Heapsize,i,j,c,root,temp;
    printf("Enter The Size of the Heap :");
    scanf("%d", &Heapsize);
    int A[Heapsize];

    for(i=0;i<Heapsize;i++){
        printf("Enter the Element :\n");
        scanf("%d",&A[i]);

    }

for(i=1;i<Heapsize;i++){
    c=i;
    do{

        root=((c-1)/2);
        if(A[root] > A[c])
        {

            temp=A[root];
            A[root]=A[c];
            A[c]=temp;


        }
        c=root;
    }
    while(c!=0);

    }

printf("The Heap changed into min heap is: ");
for (i = 0; i < Heapsize; i++)
{
printf("%d\t ", A[i]);





}
    do{

        root=((c-1)/2);
        if(A[root] < A[c])
        {

             A[c]=temp;
            A[root]=A[c];

            temp=A[root];


        }
        c=root;
    }
    while(c!=0);







printf("The Heap changed into max heap is: ");
for (i = 0; i < Heapsize; i++)
{
printf("%d\t ", A[i]);





}


}


