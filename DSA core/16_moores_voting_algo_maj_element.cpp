# include <iostream>
# include <vector> 
using namespace std;

// Moore's Voting Algorithm for Majority Element
// Time Complexity: O(n) - Single pass through the array

int majorityElement(vector<int>& nums) {
    int freq = 0, ans = 0;

    for (int val : nums) {
        if (freq == 0) {
            ans = val;
        }
        if (val == ans) {
            freq++;
        } else {
            freq--;
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {3, 3, 0, 1, 1, 2, 3};
    
    int result = majorityElement(nums);
    cout << "Majority element is : " << result << endl;

    return 0;
}