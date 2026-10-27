# include <iostream>
using namespace std;

int maxSum(int matrix[][3] , int rows , int cols){
    int maxRowSum = INT_MIN ;
    
    for (int i = 0; i < rows; i++)
    {
        int rowsum = 0;
        for (int j = 0; j < cols; j++)
        {
           rowsum += matrix[i][j] ;
        }

        maxRowSum = max(rowsum , maxRowSum);
        
    }
    return maxRowSum;
}

int main(){
    int mtx [3][3] = { {1,3,5} , {2,4,6} , {3,6,9} };
    int rows = 3, cols = 3;
    

    cout <<  "Maximum Row Sum is: " << maxSum(mtx , rows, cols) << endl;
     
    return 0;
}

