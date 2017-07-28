
#include "stdio.h"
int main()
{
    int a,b,i,j;

    for(j=1;j<5;j++){
    scanf("%d%d",&a,&b);
    while(a<b){
        printf("%d\t",a++);
    }
    printf("\n");
    system("color A5");

}
return 0;
}
