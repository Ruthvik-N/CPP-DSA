# include <iostream>
# include <algorithm>
using namespace std;

int containerWithMaxWater(int arr[], int n){
    int area, maxWater = 0;
    for(int i = 0; i < n ;  i++){
        for(int j = i+1; j < n ; j++){
          int width = j - i;
           int length = min(arr[i],arr[j]);
           area = length * width;
           maxWater = max(maxWater,area);
            }   
    } 
    return maxWater;
}

int main(){
   
    int myTank[] = {2,5,3,7,8,1,10};
    int n = 7;
    cout << "Max  water that can be stored is : " << containerWithMaxWater(myTank,n) << endl;

    return 0;
}
    