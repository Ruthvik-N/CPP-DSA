# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

void nextPer(vector<int> & nums , int n){     //Overall time complexity --> O(n) , space complexity --> O(1)
    int pivo = -1 ;
    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i+1])
        {
            pivo = i;
            break;
        }    
    }
    if (pivo == -1)
    {
        std::reverse(nums.begin(), nums.end());
    }
    
    for (int i = n - 1; i > pivo ; i--)
    {
        if (nums[i] > nums[pivo])
        {
            swap(nums[i],nums[pivo]);
            break;
        }
        
    }
     std::reverse(nums.begin()+pivo + 1 , nums.end());
    
}
int main() {
    
    vector<int> nums = {1, 2, 3 , 5 , 4};
    int n = nums.size();

    cout << "Original vector: ";
    for (int A : nums) {
        cout << A << " ";
    }
    cout << endl;

    
    nextPer(nums, n);

    cout << "Next Permutation: ";
    for (int B : nums) {
        cout << B << " ";
    }
    cout << endl;

    return 0;
}