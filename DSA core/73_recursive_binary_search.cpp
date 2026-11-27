
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& nums, int tar, int st, int end) {   // Overall Time Complexity -->? O(logn)
    if (st <= end) {
        int mid = st + (end - st) / 2;

        if (nums[mid] == tar)
            return mid;

        else if (nums[mid] < tar) {
            return binarySearch(nums, tar, mid + 1, end);
        }
        else {
            return binarySearch(nums, tar, st, mid - 1);
        }
    }

    return -1;
}

int search(vector<int>& nums, int tar) {
    return binarySearch(nums, tar, 0, nums.size() - 1);
}

int main() {
    vector<int> myArr = {-1, 0, 3, 5, 9, 12};
    int tar = 9;

    cout << "Target found at index: " << search(myArr, tar) << "\n";

    return 0;
}
