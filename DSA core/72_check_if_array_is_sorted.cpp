# include <iostream>
# include <vector>
using namespace std;

bool arrayIsSorted(vector<int> & arr , int n){  //Time Complexity --> O(n)

   if ( n == 0 || n == 1) return true;

   return arr[n - 1] >= arr[n - 2] && arrayIsSorted(arr, (n - 1));
   
}
int main(){
 
    vector<int> myArr ={1,3,6,7,10};

    cout << arrayIsSorted(myArr,myArr.size());
    return 0;
}
