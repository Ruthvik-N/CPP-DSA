# include <Stdio.h>
# include <string.h>

struct complex{
    int x;
    int y;
};

void complexcalc(struct complex c1 , struct complex c2, struct complex sum);

int main(){
    struct complex c1 = {5,7};
    struct complex c2 = {10 , -4};
    struct complex sum = {0};

    complexcalc(c1,c2,sum);
    return 0;
}

void complexcalc(struct complex c1 , struct complex c2, struct complex sum){
             sum.x = c1.x + c2.x ;
             sum.y = c1.y + c2.y ;   
            printf("sum of x is: %d\n" , sum.x);
            printf("sum of y is: %d\n" , sum.y);

}