# include <iostream>
using namespace std;

//math for dsa

//1) prime number concept

string primeNumCheck( int n){


     if (n <= 1) {

       return "Not a prime number";
       
    }

    for (int i = 2; i*i <= n ; i++)
    {
       
       if (n % i == 0)
       {
        return "Not a prime number";
       }
    }
    return "Prime number";
}
    
    int main(){
       int n = 45;
       cout << primeNumCheck(n) << endl;

       return 0;
    }
    
    
