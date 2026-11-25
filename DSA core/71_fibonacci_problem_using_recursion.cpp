# include <iostream>
using namespace std;

int fiboCalc(int n){
    
   if (n == 0 || n == 1)
   {
     return n;
   }
   
   if (n < 0){
    cout << "Fibonacci is only for whole numbers" << endl;
    return -1;
    
   }

    return fiboCalc(n - 1)  + fiboCalc(n - 2);
}

int main(){
  int n;
  cout << "Enter a number of required term of the fibonacci series: " << "\n";
  cin >> n;
  
  cout <<" Number at the " << n << "th term of the fibonacci series is: " << fiboCalc(n-1) << endl;
  return 0;

}