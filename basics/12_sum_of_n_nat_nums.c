# include <stdio.h>
# include <math.h>

int natcalc(int n);

int main(){
    int n;
    printf("Enter a number");
    scanf("%d" ,&n);
    printf("The sum of n natural numbers is:%d\n" , natcalc(n));
}



int natcalc(int n){
    if ( n <= 1)
    {
        return n ;
    }

    return n + natcalc(n-1);

}
