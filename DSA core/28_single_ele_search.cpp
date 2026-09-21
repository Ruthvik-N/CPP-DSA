# include <iostream>
# include <vector>
using namespace std;
 
int singleElementSearch(vector<int> &vals){ // time complexity is O(logn) and space complexity is O(1)
    int n = vals.size();

    if (n == 1) return vals[0];
    if (vals[0] != vals[1]) return vals[0];
    if (vals[n - 1] != vals[n - 2]) return vals[n - 1];

    int st = 1, end = n - 2;
    while(st <= end){
        int mid = st + (end - st)/2 ;
        if( vals[mid-1] != vals[mid] && vals[mid+1] != vals[mid] ){
            return vals[mid];
        }
        if(mid % 2 == 0){
          if (vals[mid - 1] == vals[mid]) {
            end = mid - 1;
        } else {
            st = mid + 1;
        }
          
        }else{
           
           if (vals[mid - 1] == vals[mid]) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
            
        }
    }
    return -1;
}
int main(){
// Test Case 1: Standard case
    vector<int> vals1 = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    cout << "Single element (Test 1): " << singleElementSearch(vals1) << " (Expected: 2)" << endl;

    // Test Case 2: Single element towards the end
    vector<int> vals2 = {3, 3, 7, 7, 10, 11, 11};
    cout << "Single element (Test 2): " << singleElementSearch(vals2) << " (Expected: 10)" << endl;

    // Test Case 3: Single element array boundary check
    vector<int> vals3 = {1};
    cout << "Single element (Test 3): " << singleElementSearch(vals3) << " (Expected: 1)" << endl;

    return 0;
}