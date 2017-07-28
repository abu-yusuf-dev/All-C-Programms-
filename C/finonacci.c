
#include <stdio.h>

int fibonaci(int n) {

   if(n==0){

    return 0;
   }
   if(n==1){

    return 1;
   }



return fibonaci(n-1) + fibonaci(n-2);

}
int  main() {

   int i;

   for (i = 0; i < 10; i++) {
      printf("%d\n", fibonaci(i));
   }

   return 0;
}
