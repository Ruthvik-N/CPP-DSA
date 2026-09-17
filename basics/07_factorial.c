#include <stdio.h>

int main() {
    int n;
    int pro = 1;
    printf("enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        pro *= i;
    }
    printf("The required factorial is: %d\n", pro);
    return 0;
}