#include <stdio.h>
#include <conio.h>
int main()
{
int HeapSize, i, j, c, root, temp;

printf("Enter The Size of the Heap :");
scanf("%d", &HeapSize);
int A[HeapSize];
for (i = 0; i < HeapSize; i++)
{
printf("Enter the Element At Node no %d : ", i+1);
scanf("%d", &A[i]);
}
for (i = 1; i < HeapSize; i++)
{
c = i;
do
{
root = ((c - 1) / 2);
if (A[root] < A[c])
{
temp = A[root];
A[root] = A[c];
A[c] = temp;
}
c = root;
} while (c != 0);
}
printf("The Heap changed into max heap is: ");
for (i = 0; i < HeapSize; i++)
{
printf("%d\t ", A[i]);
}
}
