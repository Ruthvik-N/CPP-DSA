# include <iostream>
# include <unordered_map>
# include <vector>
using namespace std;

int subArraySum(vector<int> &arr , int k){   // Time Complexity --> O(n)
    int n = arr.size();
    int count = 0;
    vector<int> pS (n,0);

    pS[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
    pS[i] = pS[i-1] + arr[i];
    }

    unordered_map <int,int> m;

    for (int j = 0; j < n; j++)
    {
      if(pS[j] == k) count ++ ;

      int val = pS[j] - k;
      if(m.find(val) != m.end()){
        count += m[val];
      }

      if(m.find(pS[j]) != m.end()){
        m[pS[j]] ++;
      }
  
    }

    return count;
 
}

int main(){

  vector<int> myArr = {3,5,4,0,8,7};
  int k = 12;
   
  cout << "The no.of sub arrays are: " << "\n" << subArraySum(myArr,k) << "\n";
}


