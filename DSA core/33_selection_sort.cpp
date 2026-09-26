#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) { // time complexity --> O(n^2)
    
    for (int i = 0; i < n - 1; i++) {
        int smallestIdx = i;
        
        // Finding minimum
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[smallestIdx]) {
                smallestIdx = j;
            }
        }
        
    
        swap(arr[i], arr[smallestIdx]);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {4, 1, 5, 2, 3, 6};
    int n = 6;
    
    selectionSort(arr, n);
    printArray(arr, n);
    
    return 0;
}