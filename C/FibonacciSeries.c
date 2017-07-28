#include <stdio.h>
void main()
{
    int a, b, c, i, n;
    a = 0;
    b = 1;
    printf("Enter length : ");
    scanf("%d", &n);
    printf("\nThe Series is: \n");
    printf("%d\t%d", a, b);
    for (i = 0; i <n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("\t%d", c);
    }
}
