# include <iostream>
# include <vector>
using namespace std;

int rotatedSortedArraySearch(vector<int> &nums , int target){
    int st = 0, end = nums.size()-1;
    
    while (st <= end)
    { int mid = st + (end - st)/2;
       if (nums[mid] == target)
       {
         return mid;
       }
       if (nums[st] <= nums[mid]) //check for left part of array is sorted or not
       {
            if (nums[st] <= target &&  target <= nums[mid])
            {
                end = mid - 1;
            }
            else{
                st = mid + 1;
            }
       }
       else{                   //  check for right part of array is sorted or not
        if (nums[mid] <= target && target <=  nums[end]) 
        {
            st = mid + 1;
        }
        else{
            end = mid = 1;
        }
       }

    }

    return -1;
}

int main(){
    vector<int> nums1 = { 4, 5, 6, 7, 0, 1, 2};
    int target1 = 0;
    cout << "Index of " << target1 << ": " << rotatedSortedArraySearch(nums1, target1) << endl;

    // Test Case 2: Target does not exist in the rotated array (should return -1)
    vector<int> nums2 = {4, 5, 6, 7, 0, 1, 2};
    int target2 = 3;
    cout << "Index of " << target2 << ": " << rotatedSortedArraySearch(nums2, target2) << endl;

    return 0;
}