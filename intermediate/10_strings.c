# include <stdio.h>

void printname(char arr[]);

 int main() {
    char firstName[] = "Ruthvik";
    char lastName[]  = "Nemani";
    printname(firstName);
    printname(lastName);
    return 0;
}

void printname(char arr[]) {
    for ( int i = 0; arr[i] != '\0'; i++ ){
       printf("%c" , arr[i]);
    }
        printf("\n");
}
