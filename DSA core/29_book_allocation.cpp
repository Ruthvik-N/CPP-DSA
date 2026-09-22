# include <iostream>
# include <vector>
using namespace std;

bool isValid(vector <int> & arr ,int n , int m,int maxAllowedPages){ //validity check if in case needed more students than availabe for book allocation
    int stu = 1 , pages = 0 , ans ;// overall Time complexity of entire code is O(nlogN) where is N is range of end - st and n is number of books
    if (m > n)
    {
        return false;
    }
  for (int i = 0; i < n; i++)
  {
   if (arr[i] > maxAllowedPages)
   {
    return false;
   }
    if (arr[i] + pages  <= maxAllowedPages)
    {
        pages += arr[i];
    }else{
          stu ++;
          pages = arr[i];
    }

    
   }
      return stu > m ? false : true ;
   
  }
  
int bookAllocator(vector <int> & arr ,int n , int m){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int ans = -1;
    int st = 0 , end = sum;
    while (st <= end)
    {
      int mid = st + (end - st)/2 ;
      if (isValid(arr,n,m,mid))
      {
        ans = mid;
        end = mid - 1;
      }else{
        st = mid + 1;
      }
      
    }
     return ans;
}

int main(){
    vector<int>arr = {15,18,25};
    int n = arr.size(), m = 2;
    cout << bookAllocator(arr,n,m) << endl;
    return 0;
}