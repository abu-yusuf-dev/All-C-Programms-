#include<stdio.h>
int main()
{
    int n1,n2,temp1,temp2;
    printf("Enter two positive integers: ");
    scanf("%d %d",&n1,&n2);
    temp1=n1;
    temp2=n2;
    while(temp1!=temp2)
    {
        if(temp1>temp2)
            temp1-=temp2;
        else
            temp2-=temp1;
    }
    printf("LCM of two numbers %d and %d is %d", n1, n2, (n1*n2)/temp1);
    return 0;
}

