# include <iostream>
#include <vector>
using namespace std;

bool rowSearch(vector<vector<int>> & matrix , int target , int row){ // time complexity -->O(logn)
     int n = matrix[0].size();
     int st = 0 , end = n - 1;
     while (st <= end)
     {
        int mid = st + ( end - st )/2 ; 
        if (target == matrix[row][mid]) return true;
        else if(target > matrix[row][mid]){
            st = mid + 1 ; 
        }
        else{
            end = mid - 1 ;
        }
        
     }

    return false;
     
}

bool searchMtx(vector<vector<int>> & matrix , int target){ //time complexity --> O(logm)

    //binary search on rows
    int m = matrix.size() , n = matrix[0].size();
     
    int stRow = 0 , edRow = m - 1;
    while (stRow <= edRow)
    {
      int midRow = stRow + (edRow - stRow )/2 ;
      if ( target >= matrix[midRow][0] && target <= matrix[midRow][n - 1]) {
             return rowSearch(matrix , target , midRow);
      }else if (target >=  matrix[midRow][n - 1])
      {
        stRow = midRow + 1;
      }else{
      edRow = midRow - 1 ;
      }
    }
     return false;
}


int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int targets[] = {3, 13, 60, 1, 23, 100};

    for (int target : targets) {
        cout << "Target " << target << ": "
             << (searchMtx(matrix, target) ? "FOUND" : "NOT FOUND")
             << endl;
    }

    return 0;
}
