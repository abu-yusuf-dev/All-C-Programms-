#include <stdio.h>
int main(){
    int a,p,i;
    printf("Enter The Number Of Buckets\n");
    scanf("%d",&a);
    printf("Enter Numbers\n");
    while(scanf("%d",&p)!=EOF){

        i=(p*p-54/7)%a;
        printf("%d Will Go To %d th Bucket\n",p,i);

    }

}
