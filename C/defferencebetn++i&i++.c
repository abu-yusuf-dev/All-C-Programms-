#include<stdio.h>
int main()
{

    int i,j;
    j=9;//
    i=j++; //এই খানে প্রথমে  i = j এর ভালু আসাইন করবে।মানে i = 9 হবে।তারপর j=j+1 হবে।মানে 10 হবে।(output = 10,9 )
    printf("%d\n\n%d\n",j,i);
    getch();
    return 0;
}
