# include <iostream>
using namespace std;

int sumofN(int n){
   int sum = 0;
   for (int i = 0; i <= n; i++)
   {
     sum += i;
   } 
   return sum;
}

int main(){
  cout << "Required sum is: " << sumofN(10) << endl;
  cout << "Required sum is: " << sumofN(50) << endl;

    return 0;
}