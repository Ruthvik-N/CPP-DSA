# include <iostream>
using namespace std;

//diagonals sum of a 2D matrix
int diagonalSum(int matrix[][4] , int n){
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n; j++)
       {
        if (i == j)
        {
           sum += matrix[i][j] ; 
        }
        else if ( j == n - 1- i)
        {
            sum += matrix[i][j] ;
        }
        
       }
       
    }
    return sum ;
}

int main(){
    int myMatrix[4][4] = {{1,2,3,4} , {5,6,7,8} , {1,3,5,7} , {2,4,6,8} };
    int n = 4;
    cout << diagonalSum(myMatrix,n) << "\n" ; 

    return 0;
}