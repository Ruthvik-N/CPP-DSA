# include <iostream>
# include  <vector>
# include <climits>
using namespace std; 

int main(){
  int cursum = 0;
  int maxval = INT_MIN;
  vector<int>nums = {1,-5,2,3,-6,7,8,-4};
  for (int val : nums )
  {
    cursum += val;
    maxval = max(cursum,maxval);
    if (cursum < 0)
    {
      cursum = 0;
    }
    
  }
cout << "The sum using kadanes algorithm is = " <<  maxval;

}