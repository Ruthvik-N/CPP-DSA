# include <iostream>
# include <vector>
using namespace std;

int peakIndexCheck(vector<int> & nums ){ //time complexity is O(logn),space complexity is O(1)
    int st = 1 , end = nums.size()-2 ;
    while (st <= end)
    {
        int mid = st + (end - st)/2 ; 
      if (nums[mid-1] < nums[mid] && nums[mid] > nums[mid + 1])
      {
        return mid;
      }
      if (nums[mid-1] < nums[mid])//left array no need to check for peak index
      {
        st = mid + 1 ;
      }
      else{ // indirectly this indicates right part of array is decreasing so no need to check
          end = mid  - 1 ; 
      }
      
    }
    return -1;
}

int main(){
    vector<int>val1 = {1,2,4,6,8,10,5,3,2,1};
    cout << peakIndexCheck(val1) << endl;

    vector<int>val2 = {1,2,3,4,5,6,7,8,10,12,9,10};
    cout << peakIndexCheck(val2) << endl;
}