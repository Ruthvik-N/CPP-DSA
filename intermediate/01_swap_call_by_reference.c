# include <stdio.h>

void swapfunc(int * a , int * b);

int main(){
    int a=3,b=5;
    swapfunc(&a,&b);
    printf("a = %d, b = %d\n" , a,b);
    return 0;
    
}

void swapfunc(int *a ,int *b){
    int t = *a;
    *a = *b;
    *b = t;
     return ;
}
