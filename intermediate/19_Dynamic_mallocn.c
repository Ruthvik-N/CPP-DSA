# include <stdio.h>
# include <stdlib.h>

int main(){
 float*ptr;
   ptr = (float*)malloc(5*sizeof(float));
   
   ptr[0] = 1.3;
   ptr[1] = 1.7;
   ptr[2] = 3.14;
   ptr[3] = 2.73;
   ptr[4] = 1.57;

   for(int i = 0 ; i < 5; i++ ){
    printf("the stored info is: %.2f\n",ptr[i]);
   }
    return 0;
}