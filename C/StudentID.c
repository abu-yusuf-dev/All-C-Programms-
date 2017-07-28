#include <stdio.h>
#include <stdlib.h>

int main (){
  int m;
scanf("%d ",&m);
int array[m][3];

  int i, k;
  for(i = 0; i < m; i++){
    for(k = 0; k < 3; k++){
       scanf("%d", &(array[i][k]));
    }
  }



    int average;
  for(i = 0; i < m; i++){
     for(k = 0; k < 3; k++){
        int max=array[0][0];

                {
                if(max>array[i][1]){
                        if(array[i][1]>array[i][2]){
                            average = ((max + array[i][1])/2);
                            printf("average of maximum two is: %d",average);
                        }
                        else{
                            average = ((max + array[i][2])/2);
                        }
                }

                if(max<array[i][1]){
                        if(array[i][1]>array[i][2]){
                            average = ((max + array[i][1])/2);
                            printf("average of maximum two is: %d",average);
                        }
                        else{
                            average = ((max + array[i][2])/2);
                        }
                }
     }
     printf("\n");
  }
  }





  printf("marks: \n");
  printf("Roll  CT1      CT2      CT3     Best-2    Average\n");                                    // the problem occurs before this point.
  for(i = 0; i < m; i++){
     for(k = 0; k < 3; k++){
       printf("%d%8d ",i+1, array[i][k]);
       //printf("%d",average);
     }
     printf("\n");
  }


  return 0;

}

