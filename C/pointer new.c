#include<stdio.h>
int main()
{
    int a,b;
    int *p;
    a= 5;
    p=&a;
    printf("a = %d\n",p);
    p=&b;
    b=7;
     printf("a = %d\n",p);




}
