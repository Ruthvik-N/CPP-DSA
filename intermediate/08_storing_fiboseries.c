# include <stdio.h>

int main(){
    int n = 15;
    int fib[n];

    fib[0] = 0;
    fib[1] = 1;

    for ( int i = 2; i < n; i++)
    {
      fib[i] = fib[i-1] + fib[i-2];
    }
     

  printf("The first %d Fibonacci numbers are: { ", n);
    for( int i = 0 ; i < n; i++)
    {
        printf("%d ", fib[i]);
    }
    printf("}\n");
     return 0;
} 
