# include <iostream>
# include <algorithm>
# include <vector>
using namespace std;

//time complexity --> O(n) . space complexity --> O(1)
vector<int> productCalc(vector<int> &nums){
    int n = nums.size();
    vector<int>ans(n,1);
//for prefix
ans[0] = 1;
for (int i = 1; i < n; i++)
{
   ans[i] = ans[i - 1] * nums[i - 1];
}
// for suffix
int suffix = 1;

for (int i = n-2; i >= 0; i--)
{
   suffix *= nums[i+1];
   ans[i] *= suffix;
}
return ans;
}
int main(){
    vector<int>vec = {2,5,7,7,3,5,6,4,8,9};
    int n = vec.size();
    vector<int> result = productCalc(vec);
    
    for(int val : result) {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;

}

