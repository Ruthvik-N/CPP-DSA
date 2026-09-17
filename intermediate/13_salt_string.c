# include <stdio.h>
# include <string.h>

void saltystr(char password[]);

int main(){
    char mypassword[40];
    printf("enter a password: ");
    scanf("%s", mypassword); 
    saltystr(mypassword);
    printf("your salted password is: %s\n" ,mypassword);
    return 0 ;
}


void saltystr(char password[]) {
    char saltstr[] = "123";
    strcat(password,saltstr);
    return ;
}
