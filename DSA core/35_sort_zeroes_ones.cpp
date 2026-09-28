# include <iostream>
# include <vector>
using namespace std;

void sortArray(vector<int> & arr , int n){
    int count0 = 0, count1 = 0 , count2 = 0;
    for (int i = 0; i <n ; i++)
    {
        if (arr[i] == 0)
        {
            count0 ++;
        }else if (arr[i] == 1)
        {
            count1 ++;
        }else{
            count2 ++;
        }
        
        int idx = 0;
        for (int i = 0; i < count0; i++)
        {
             arr[idx++] = 0;
        }
        for (int i = 0; i < count1; i++)
        {
             arr[idx++] = 1;
        }
        for (int i = 0; i < count2; i++)
        {
             arr[idx++] = 2;
        }  
    }    
}


int main(){
    vector<int>vec = {1,1,1,1,2,2,1,2,2,0,0,1,2,0,2};
    int n = vec.size();
    sortArray(vec,n);
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }
    
    return 0;
}