#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int r,z,b, c, d, i, arr[8];
    printf("Enter Default Weight of all 8 balls\n");
    scanf("%d", &z);
    for (i = 0; i<8; i++)
    {
       arr[i]=z;
    }
    r=rand()%8;
    arr[r]=z+1;
     c = arr[0]+arr[1]+arr[2];
     d = arr[3]+arr[4]+arr[5];

    if ( c > d ){
        if (arr[0] > arr[1])
            printf("\n1");
        if (arr[0] < arr[1])
            printf("\n2");
        else
            printf("\n3");
    }

    if( c < d ){
        if (arr[3] > arr[4])
            printf("\n4");
        if (arr[3] < arr[4])
            printf("\n5");
        else
            printf("\n6");

    }

    else{
            if(arr[6] > arr[7])
                printf("\n7");
            else
                printf("\n8");
    }

    return 0;
}
