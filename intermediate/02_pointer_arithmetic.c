# include <stdio.h>

void doubleval(int *ptr);

int main (){
    int num = 7;
    doubleval(&num);
    printf("%d",num);
    return 0;

}

void doubleval(int*ptr){
    *ptr =(2) * (*ptr);
    return;


}

