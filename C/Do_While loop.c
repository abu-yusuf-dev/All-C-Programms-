#include<stdio.h>
int main()
{
    int counter=1,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    do
    {
        printf("%d\t",counter);
    }

    while(++counter<=n);
    getch();


}
