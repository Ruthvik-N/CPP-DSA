# include <iostream>
using namespace std;

void bubbleSort(int arr[] , int n){
    bool arrSwap = false;
    for (int i = 0; i < n-1; i++)
    { 
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                arrSwap = true;
            }
            
        }
   }
   if(!arrSwap) {
        return ;
   }
   
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[] = {1,4,6,7,8,4,10};
    int n = 7;
    bubbleSort(arr,n);
    printArray(arr,n);
    return 0;
}