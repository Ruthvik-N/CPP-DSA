# include <stdio.h>

void inputstr(char arr[],int n);

int main(){
    char myarr[40];
    printf("enter a character or letter: ");
    inputstr(myarr,30);
    printf("entered input is: %s\n",myarr);
    return 0;
}


void inputstr(char arr[],int n){
    char ch,i;
    for(i = 0; i < n; i++){
        scanf("%c", &ch);
        if (ch == '\n')
        {
            break;
        }
        arr[i] = ch;    

    }
      arr[i] = '\0';
}