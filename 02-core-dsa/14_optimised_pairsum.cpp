# include <iostream>
# include <vector>
using namespace std;

vector<int> PairSum(vector<int>nums , int target){
    vector<int> ans;
    int n = nums.size();
    int i= 0 ,j = n - 1;
while (i < j)
{
    int pairSum = nums[i] + nums[j];
  if (pairSum > target)
  {
    j--;
  }
  else if (pairSum < target)
  {
   i++;
  }
  else {
    ans.push_back(i);
    ans.push_back(j);
    return ans;
  }
  
  
}
   return ans;
}

int main(){
    vector<int>vec = {3,5,8,9,10};
    int target = 18;

    vector<int>ans = PairSum(vec,target);
    cout << ans[0] << " , " << ans[1] << endl;

    return 0;
}