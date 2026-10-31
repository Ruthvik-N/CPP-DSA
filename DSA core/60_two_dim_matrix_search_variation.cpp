# include <iostream>
# include <vector>
using namespace std;

bool searchMtx(vector<vector<int>> & matrix, int target ){  // time complexity -->O(m+n)

    if (matrix.empty() || matrix[0].empty())
      return false;
     
    int m = matrix.size() , n = matrix[0].size();
    int rows = 0 , cols = n - 1 ;
    
    while (rows < m && cols >= 0)
    {
       if (target == matrix[rows][cols])
       {
        return true ;
       }else if(target < matrix[rows][cols]){
            cols -- ;
       }else{
        rows ++ ;
       }
       
    }
    return false;
}
int main() {
    vector<vector<int>> matrix = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };

    vector<int> targets = {5, 20, 31, 1, 16, 100};

    for (int target : targets) {
        cout << "Target " << target << ": "
             << (searchMtx(matrix, target) ? "Found" : "Not Found")
             << endl;
    }

    return 0;
}