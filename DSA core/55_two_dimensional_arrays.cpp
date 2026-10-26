# include <iostream>
using namespace std;

//linear search
pair<int,int> linSearch( int matrix[][4] , int rows , int cols , int key){
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols ; j++)      
        {
            if ( key == matrix[i][j]){
             return{i , j};
            } 
            
        }
        
    }
    return {-1,-1};
}

int main(){

    
 int mtx [2][4] = { {1,3,5,7,} , {2,4,6,8}};
    int rows = 2 , cols = 4;
    int key = 6;

   pair<int,int> result = linSearch(mtx,rows,cols,key);

   if (result.first != -1) {
    cout <<" Found at row : " << result.first << endl;
   }
   if (result.second != -1) {
    cout <<" Found at column: " << result.second << endl;
   }
   else {
   cout << "Not found" << endl;
   }
   
    return 0;
}