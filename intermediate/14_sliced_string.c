# include <stdio.h>
# include <string.h>

void slice(char arr[],int n , int m);

int main(){
    char str[200];
    printf("enter a string: ");
    scanf("%s", str); 
    slice(str,4,10); 
    printf("sliced string is: %s\n" , str);
    return 0;
}

void slice(char arr[],int n , int m){
       int j = 0;
      for ( int i  = n ; i <= m ; i++){
        arr[j] = arr[i];
        j++ ; 
    }
     arr[j] = '\0';
}
