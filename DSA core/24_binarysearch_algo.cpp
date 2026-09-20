# include <iostream>
# include <vector>
using namespace std;

int binarySearch(vector<int>arr , int tar){
    int st = 0 , end =  arr.size()-1;
    while (st <= end)
    {
        int mid = (st + end)/2;
        if (tar > arr[mid])
        {
            st = mid + 1;
        }else if (tar < arr[mid])
        {
           end = mid - 1;
        }else{
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int>nums1 = {1,4,5,6,7,8,9,17};
     int tar1 = 8;

     cout << binarySearch(nums1,tar1) << endl;

    vector<int>nums2 = {-5,-1,0,2,4,6,8,9,15};
     int tar2 = 2;
      
     cout << binarySearch(nums2,tar2) << endl;

    return 0;
} 
