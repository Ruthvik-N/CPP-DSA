
#include <iostream>
#include <vector>
using namespace std;


// Time Complexity: O(m * n)

vector<int> spiralOrder(vector<vector<int>>& mat) {
    if (mat.empty() || mat[0].empty()) {
        return {};
    }

    int m = mat.size();
    int n = mat[0].size();

   
    int srow = 0, scol = 0;
    int erow = m - 1, ecol = n - 1;

    vector<int> ans;

    while (srow <= erow && scol <= ecol) {

        // 1. Traversing top row: left to right
        for (int j = scol; j <= ecol; j++) {
            ans.push_back(mat[srow][j]);
        }

        // 2. Traversing right column: top to bottom
        for (int i = srow + 1; i <= erow; i++) {
            ans.push_back(mat[i][ecol]);
        }

        // 3. Traversing bottom row: right to left
        for (int j = ecol - 1; j >= scol; j--) {
            if (srow == erow) {
                break;
            }
            ans.push_back(mat[erow][j]);
        }

        // 4. Traversing left column: bottom to top
        for (int i = erow - 1; i > srow; i--) {
            if (scol == ecol) {
                break;
            }
            ans.push_back(mat[i][scol]);
        }

        
        srow++ ,  scol++;
        erow-- ,  ecol--;
    }

    return ans;
}

int main() {
    vector<vector<int>> mat = {
        {1, 2, 3 , 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    vector<int> result = spiralOrder(mat);

    cout << "Spiral Order: ";

    for (int val : result) {
        cout << val << " ";
    }

    cout << endl;

    return 0;
}
