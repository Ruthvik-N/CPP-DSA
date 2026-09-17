# include <stdio.h>

void comp(int*a,int*b);

int main(){
    int a=5,b=10;
    comp(&a,&b);
    
    return 0;
}

void comp(int*a,int*b) {
    if (*a>*b)
    {
        printf("1");
    }
    else{
        printf("0");
    }
    
}