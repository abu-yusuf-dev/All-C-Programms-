#include<stdio.h>
int main()
{
    int a[3][3]={2,4,5,6,7,8,9,1,10};
    int b[3][3]={3,2,3,4,8,6,7,8,11};
    int c[3][3],i,j,k,sum;
    int m,n,p;
     m=n=p=3;
     printf("first part is :\n");
    for(i=0;i<m;i++){
        for(j=0;j<p;j++){

            printf("\t%d",a[i][j]);


    }
    printf("\n");

    }
   printf("second  part is :\n");
        for(i=0;i<m;i++){
           for(j=0;j<n;j++){

               printf("\t%d",b[i][j]);


    }
    printf("\n");

    }

    if('a[0][0]=b[0][0] & a[1][1]=b[1][1] & a[2][3]= b[2][3]'){
        printf("Game Successful\n");
    }
        else if('a[0][0]!=b[0][0] & a[1][1]!=b[1][1] & a[2][3]!= b[2][3]'){ 
        printf("Game UnSuccessful\n");
    
        

    }
    else
            printf("Game Over \n");


}

