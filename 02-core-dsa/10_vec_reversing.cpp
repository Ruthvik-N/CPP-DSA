# include <iostream>
# include <vector>
using namespace std;

void vectorreverse(vector<int> &vec){
   int start = 0,end = vec.size()-1;
   while (start < end)
   {
     swap(vec[start],vec[end]);
   
   start++;
   end--;
   }
}
int main(){
    vector<int>moon ={3,6,9,36,69,96,33,93,99,98};
    vectorreverse(moon);
    for (int val: moon)
    {
        cout << val << " " ;
    }
    return 0;
}
