# include <stdio.h>
int main(){
    float final_cost;
    float cost[3];
    printf("enter price of 1st item: ");
    scanf("%f",&cost[0]);

    printf("enter price of 2nd item: ");
    scanf("%f",&cost[1]);

    printf("enter price of 3rd item: ");
    scanf("%f",&cost[2]);

    final_cost = cost[0]+cost[1]+cost[2] * 1.18;

    printf("Final cost is:%f\n", final_cost);
    return 0;

}