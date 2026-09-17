# include <stdio.h>

int oddcount(int arr[],int n);

int main(){
    int myarr[] = {12,3,4,5,6,7,7588,5,63,6,7};
    
      printf("no of odd no.s is:%d\n", oddcount(myarr,10));
}

int oddcount(int arr[],int n) {
       int count;
       count = 0;
       for(int i = 0 ; i < n ; i++){
         if (arr[i] % 2 != 0 )
           {
              count ++ ;
            }
    }
       return count;
}