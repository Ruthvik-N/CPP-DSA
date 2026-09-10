# include <iostream>
using namespace std;

int main(){
   int size = 8;
   int ages[size];

   for (int i = 0; i < size; i++)
   {
    cout << " enter your marks " ;
    cin >> ages[i] ;
   }
   

 for (int i = 0; i < size; i++)
 {
   cout << ages[i] << "\n"; 
 }
    
}
