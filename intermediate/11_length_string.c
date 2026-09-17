# include <Stdio.h>
# include <string.h>

int countlength(char arr[]);

 int main(){
    char name[40];
    fgets(name,40,stdin);
    printf("length is: %d", countlength(name));
}

int countlength(char arr[]){
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++){
       count++;
    } 
    return count-1;
}

 