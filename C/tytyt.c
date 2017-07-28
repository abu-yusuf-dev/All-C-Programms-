
#include <stdio.h>

void fun(int a)
{
    if(a<=0)
    {
        printf("\n");
        return;
    }


        printf("%d\n",a);

        fun(--a);

        printf("%d\n",a);

    }





int  main()
{
   int n;
    scanf("%d",&n);
    fun(n);
    return 0;

}










