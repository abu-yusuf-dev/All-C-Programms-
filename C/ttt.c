#include<stdio.h>
int main(){
    int i;
    for(i=0;i<5;i++)
    {
        printf("%u\n",&i); //#print address of each element
    }
    return 0;
}
