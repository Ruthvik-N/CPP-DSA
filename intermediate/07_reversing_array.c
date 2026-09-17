# include <stdio.h>

void swaparr(int arr[],int n);

int main(){
    int n=13;
    int myarr[] = {1,2,3,4,5,6,7,8,935,2,7,4,8};
    printf("your swapped array is: {" );
         swaparr(myarr,13);
    for(int i = 0 ; i < n ; i++){
        printf("%d ", myarr[i]);
    } 
     printf("}\n");
     return 0;
}


void swaparr(int arr[],int n){
    for (int i = 0,j = n-1; i < j ; i++ , j-- )
    { int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        
    }
    
}