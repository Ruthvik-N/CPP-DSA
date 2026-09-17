# include <stdio.h>
# include <string.h>

void occofvowels(char arr[]);

int main(){
    char mystring[200];
    printf("enter a string: ");
    scanf("%s", mystring);
    occofvowels(mystring);
    return 0;
}

void occofvowels(char arr[]){
    int count = 0,i;
    for ( i = 0; arr[i] !='\0' ; i++)
    {
        if ( arr[i] == 'a' || arr[i] == 'A' || arr[i] == 'e' || arr[i] == 'E' || arr[i] == 'i' || arr[i] == 'I' || arr[i] == 'o' || arr[i] == 'O' || arr[i] == 'u' || arr[i] == 'U')
        {
            count++ ; 
        }
        
    }
    printf("occurence of vowels in entered string is: %d\n",count);
}

