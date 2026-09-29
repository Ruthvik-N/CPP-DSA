# include <iostream>
# include <vector>
using namespace std;

void sortArray(vector<int>& arr, int n) {  //time complexity --> O(n)
    int low = 0, mid = 0, high = n - 1; 
    
    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else { // arr[mid] == 2
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}


int main(){
    vector<int>vec = {1,1,1,1,2,2,1,2,2,0,0,1,2,0,2};
    int n = vec.size();
    sortArray(vec,n);
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }

    return 0;
}