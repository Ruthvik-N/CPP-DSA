#include <stdio.h>

void calctable(int n);

int main() {
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    calctable(n);
    return 0;
}

void calctable(int n) {
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", n * i);
    }
}