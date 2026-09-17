# include <stdio.h>
# include <math.h>

int fact(int n);

int main(){
    int n;
    printf("Enter a number");
    scanf("%d" ,&n);
    printf("The factorial of n natural numbers is:%d\n" , fact(n));
}



int fact(int n){
    if ( n == 0 || n == 1)
    {
        return 1 ;
    }

    return n * fact(n-1);

}