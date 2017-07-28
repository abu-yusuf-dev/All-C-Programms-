#include<stdio.h>
int main()
{
    int x,y;
    int *p;
    p = &x;
    x=5;
    y=*p;
    printf("%d \t",y);
    return 0;
}
