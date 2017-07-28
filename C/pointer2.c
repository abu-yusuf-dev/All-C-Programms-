#include "stdio.h"
int main()
{
    int x;
    x=100;

    printf("Address of x = %d\n", &x);

    int *px;

    px = &x;

    printf("px = %d\n", px);

    printf("Value of x = %d\n", *px);

    return 0;
}
