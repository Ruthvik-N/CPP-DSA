#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) { // time complexity --> O(n^2)
    for (int i = 1; i < n; i++) {
        int cur = arr[i];
        int prev = i - 1;

        while (prev >= 0 && arr[prev] > cur) {
            arr[prev + 1] = arr[prev];
            prev--;
        }

        
        arr[prev + 1] = cur;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {4, 1, 5, 2, 3, 6 ,8};
    int n = 7;

    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}