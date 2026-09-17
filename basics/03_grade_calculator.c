#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if (marks <= 100 && marks >= 90) {
        printf("your grade is: A\n");
    } else if (marks >= 80 && marks < 90) {
        printf("your grade is: B\n");
    } else if (marks >= 70 && marks < 80) {
        printf("your grade is: C\n");
    }
    return 0;
}