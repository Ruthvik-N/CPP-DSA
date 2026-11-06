# include <iostream>
# include <unordered_map>
# include <vector>

using namespace std;

vector<int> twoSum(vector<int> & arr , int tar){ // Time complexity --> O(n)
    unordered_map<int,int> m;
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        int first = arr[i];
        int second = tar - first;

        if ( m.find(second) != m.end())
        {
           ans.push_back(i);
           ans.push_back(m[second]);
           break;
        }
        
        m[first] = i;
    }
    return ans;
}


int main(){

  vector<int> nums = {2,3,4,7,13,6,8};
    int target = 21;
     vector<int> ans = twoSum(nums , target) ;
     cout << "Index of first number and the second number is : " ;
     for (int idx : ans)
     {
       cout << idx  << " " ; 
     }
     cout << endl;

    return 0;
}

