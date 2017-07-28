#include<stdio.h>
#include<dos.h>
#include<conio.h>
main()
{
int n,i,m;

printf("\n Enter the number:");
scanf("%d",&n);


for(i=1;i<=n;i++)
{
m=m*i;
}
printf("\n Factorial of %d is=%d",n,m);

}
