# include <stdio.h>

void printalph(char*ch);

int main(){
     char ch = 'A';
     char *ptr = &ch;
     
    printalph(ptr);

    return 0;
}

void printalph(char*ch) {
       for(*ch = 'A'; *ch <= 'Z';(*ch)++) {
        printf("%c ",*ch);
    }
}