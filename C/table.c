#include<stdio.h>
int main()
{

    int a,b,c;
    scanf("%d",&a);

    int arr[a][a];
    for(b=0;b<a;b++){
        for(c=0;c<a;c++){
            scanf("%d",&arr[b][c]);


        }

    }
       for(b=0;b<a;b++){
        for(c=0;c<a;c++){
            printf("%2d",arr[b][c]);



        }
         printf("\n");
    }
            return 0;
}
