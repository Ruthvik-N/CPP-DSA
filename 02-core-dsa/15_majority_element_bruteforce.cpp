# include <iostream>
# include <vector>
using namespace std;

int main(){
    vector<int>nums = {1,1,3,4,4,3,4,2,4,5,7,8,7,5,8,4,5,4,4,4,4,4,4,4,4,4,4,4,4,4};
    int n = nums.size();
    int ans = -1;
    
  for (int val : nums)
  {
    int freq = 0;
    for (int ele : nums)
    {
        if (ele == val)
        {
            freq ++ ; 
        }
        
    }
    if (freq > n/2)
    {
        ans = val;
        
    }
   
  }
  cout << "Majority element is : " << ans << endl;
    return 0;
}
