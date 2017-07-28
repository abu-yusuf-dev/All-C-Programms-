#include<stdio.h>
int main()
{
    int i,j;
    int c[6];
    printf("Main elements are :\n");
    for(i=0;i<5;i++){
    scanf("%d\t",&c[i]);
    }
    printf("\n");
    if('c[5]=0'){
       c[5]=c[4];
       c[4]=0;

       printf("Move right 'B'\n");
       for(i=0;i<6;i++){

    printf("%d\t",c[i]);

       }
      }
      printf("\n");
    if('c[4]=0'){
       c[4]=c[2];
       c[2]=0;
       printf("Jumped right 'A'\n");
       for(i=0;i<6;i++){

    printf("%d\t",c[i]);

       }
      }
printf("\n");
if('c[2]=0'){
       c[2]=c[1];
       c[1]=0;
       printf("Move right  'A'\n");
       for(i=0;i<6;i++){

    printf("%d\t",c[i]);

       }
      }
printf("\n");
if('c[1]=0'){
       c[1]=c[3];
       c[3]=0;
       printf("jumped left 'B'\n");
       for(i=0;i<6;i++){

    printf("%d\t",c[i]);

       }
      }
      printf("\n");
if('c[3]=0'){
       c[3]=c[2];
       c[2]=0;
       printf("Move right 'A'\n");
       for(i=0;i<6;i++){

    printf("%d\t",c[i]);

       }
      }

printf("\n");
if('c[2]=0'){
       c[2]=c[5];
       c[5]=0;
       printf("jumped left 'B'\n");
       for(i=0;i<6;i++){

    printf("%d\t",c[i]);


       }
      }
      printf("\n");
 printf("total cost is :  9 \n");


    return 0;
      }






