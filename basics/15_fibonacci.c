# include <stdio.h>

int fibocalc(int n);

int main(){
    int n;
    printf("enter a number");
    scanf("%d" , &n);
    printf("The fibonacci series is:");
    for(int i = 0; i < n; i++){
     printf("%d ", fibocalc(i));
    } 
    
    printf("\n");
    return 0;
}


int fibocalc(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    return fibocalc(n-1) + fibocalc(n-2);
}