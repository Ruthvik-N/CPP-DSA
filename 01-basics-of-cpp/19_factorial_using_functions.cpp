# include <iostream>
using namespace std;

int calcFact(int n){
   int fact = 1;
   for (int i = 1; i <= n; i++)
   {
    fact *= i;
   }
   return fact;
}

int main(){
    cout << "Factorial required is: " << calcFact(6) << endl;
    cout << "Factorial required is: " << calcFact(10) << endl;
    cout << "Factorial required is: " << calcFact(4) << endl;
}