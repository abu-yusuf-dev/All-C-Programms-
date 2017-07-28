#include"stdio.h"
int fac()
{
    int m,p;
    if(m==1&&p==1){
        return 1;
    }
    return m*fac(m-1)/((m-p)*fac((m-p)-1));
}



int main()
{
    int n,r,f;
    scanf("%d%d",&n,&r);
    f=fac(n,r);
    printf("The Permutation of %d p %d is %d\n",n,r,f);
    return 0;
}

