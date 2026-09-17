#include <stdio.h>

int main() {
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i <= 10; i++) {
        printf("%d\n", n * i);
    }
    return 0;
}