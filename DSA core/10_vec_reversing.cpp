# include <iostream>
# include <vector>
using namespace std;

void ReverseVector(vector<int> &vec){
    int start = 0,end = vec.size()-1;
    while (start < end)
    {
        swap(vec[start],vec[end]);
        start++ ; 
        end-- ; 
    }
    
}

int main(){
    vector<int>harry = {3,6,9,1,2,4,5,7,10,100,35,6,7};
    ReverseVector(harry);
    for (int val : harry)
    {
        cout << val << " ";
    }
 return 0;   
}
