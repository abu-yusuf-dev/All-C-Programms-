#include "stdio.h"
int  main()
{
    int a=1;
    start:
        printf("%d\t",a);
        a++;
        if(a<=7){
            goto start;
        }
    return 0;

}
