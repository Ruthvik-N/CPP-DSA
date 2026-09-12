# include <iostream>
# include <vector>
using namespace std;

int linearSearch(vector<int>vec , int target){
    for (int i = 0; i < vec.size();i++)
    {
        if (vec[i] == target)
        {
            cout << "Target found: " << vec[i] << endl;
            return i;
        }
    }
    return -1;
}

int main(){
 vector<int>abc = {1,2,3,4,5,6,7,8,9,10};
   int target = 8;
   cout << linearSearch(abc,target) << endl;
   return 0;
}