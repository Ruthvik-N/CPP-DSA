# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

bool isPossible(vector<int> & arr , int n, int m, int maxAllowedTime){ //O(n)
     int painters = 1, time = 0;
 for (int i = 0; i < n; i++)
 {
    if (arr[i]+time <= maxAllowedTime)
    {
      time += arr[i];
    }
    else{
        painters ++ ;
        time = arr[i];
    }
 }
 return painters <= m ;
}

int minPaintingTime(vector<int> &vec , int n,int m){ // Overall time complexity -- O(log(sum)*n)
    int sum = 0, maxVal = INT_MIN;
    for (int i = 0; i < n; i++) // time complexity --O(n)
    {
       sum += vec[i];
       maxVal = max(vec[i],maxVal);
    }
    int st = maxVal, end = sum , ans = -1;
    while (st <= end)  // time complexity -- O(log(sum)*n)
    { 
        int mid = st + (end - st)/2;
     if (isPossible(vec, n , m,mid))
     { 
        ans = mid;
        end = mid - 1 ;
     }else{
        st = mid + 1 ;
     }
        
    }
    return ans;
 
}

int main(){
    vector <int> arr = {40,30,20,10};
    int n = 4, m = 2;

    cout << minPaintingTime(arr,n,m) << endl;
    return 0;
    
}
