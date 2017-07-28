#include<stdio.h>
#include<conio.h>
int main()
{
 int arr[30];
 int i,j,size,tmp;
 printf("\n\t------ Insertion sorting method ---------\n\n");
 printf("Enter total no. of elements : ");
 scanf("%d", &size);
 for(i=0; i<size; i++)
 {
   printf("Enter %d element : ",i+1);
   scanf("%d", &arr[i]);

 }
 for(i=0; i<size; i++)
 {
  for(j=i-1; j>=0; j--)
  {
   if(arr[j]>arr[j+1])
   {
     tmp=arr[j];
     arr[j]=arr[j+1];
     arr[j+1]=tmp;
   }
   else
     break;
  }
 }
 printf("\n\t------- Insertion sorted elements -------\n\n");
 for(i=0; i<size; i++)
    printf(" %d",arr[i]);
 getch();
 return 0;
}

