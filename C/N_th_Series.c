
#include<stdio.h>
int main()
{
    int s=0;int i=1;
    int n;
    printf("\nEnter the value of n :");
    scanf("%d",&n);
    while(i<=n)
     {

      s=s+i;
        i++;
     }
     printf("Sum is :%d",s);
     getch();


}
