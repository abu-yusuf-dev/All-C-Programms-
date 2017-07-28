
#include <stdio.h>

int main()
{
    int b, c, d, i, arr[8];

    for (i = 0; i<8; i++)
    {
        scanf("%d", &arr[i]);
    }

     c = arr[0]+arr[1]+arr[2];
     d = arr[3]+arr[4]+arr[5];

    if ( c > d ){
        if (arr[0] > arr[1])
            printf("\nHigher input in array 0");
        if (arr[0] < arr[1])
            printf("\nHigher input in array 1");
        else
            printf("\nHigher input in array 2");
    }

    if( c < d ){
        if (arr[3] > arr[4])
            printf("\nHigher input in array 3");
        if (arr[3] < arr[4])
            printf("\nHigher input in array 4");
        else
            printf("\nHigher input in array 5");

    }

    else{
            if(arr[6] > arr[7])
                printf("\nHigher input in array 6");
            else
                printf("\nHigher input in array 7");
    }

    return 0;
}





















