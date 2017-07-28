#include <stdio.h>
int n, r, npr_var;
void main()
{
    int i=15;

    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("\nEnter the value of r:");
    scanf("%d", &r);

    /* nPr is also known as P(n,r), the formula is:
     * P(n,r) = n! / (n - r)! For 0 <= r <= n.
     */
    //npr_var = fact(n) / fact(n - r);
    printf("\nThe value of P(%d,%d) is: %d",n,r,npr_var);
}
// Function for calculating factorial
int fact(int num)
{
    int k = 1, i;
    // factorial of 0 is 1
    if (num == 0)
    {
        return(k);
    }
return  fact(n) / fact(n - r);
    //printf("\nThe value of P(%d,%d) is: %d",n,r,npr_var);



}
