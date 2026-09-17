#include <stdio.h>

int main() {
    int n;
    do {
        printf("enter a number: ");
        scanf("%d", &n);
        if (n % 7 == 0) {
            break;
        }
    } while (1);

    printf("you entered a multiple of 7. Code ended: %d\n", n);
    return 0;
}