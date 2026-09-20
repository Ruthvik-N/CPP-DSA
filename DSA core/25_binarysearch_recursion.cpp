# include <iostream>
# include <vector>
using namespace std;

int binarySearch(vector<int> &nums , int tar , int st , int end){
    if (st <= end)
    {
       int mid = st + (end - st)/2;

       if (nums[mid] > tar)
       {
        return binarySearch(nums,tar,st,mid -1 );
       } else if (nums[mid] < tar)
       {
          return binarySearch(nums,tar,mid + 1, end);
       }
       else{
        return mid;
       }
    }

  return -1;

}

int main(){
   vector<int>bin1 = {3,6,7,10,25,65,314,1000,2345,6563};
   int tar1 = 2345;
   int n1 = bin1.size()-1;
   cout << binarySearch(bin1,tar1,0,n1) << endl;

    vector<int>bin2 = {-30,-16,-4,-1,0,1,4,7,8,10,24,57};
   int tar2 = -4;
   int n2 = bin2.size()-1;
   cout << binarySearch(bin2,tar2,0,n2) << endl;

    return 0;
}