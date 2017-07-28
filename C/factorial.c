#include "stdio.h"
int fac(int m)
{
    if(m<=1){
        return 1;
    }
    return m*fac(m-1);
}

int main()
{
    int n,f;
    printf("Plz Enter the Number : \n");
    scanf("%d",&n);
    f=fac(n);
    printf("The factorial of %d is %d\n",n,f);
    return 0;
}
