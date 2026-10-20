# include <iostream>
# include <vector>
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

//2) Sieve of Erathostenes

int primeNumCount(int n){

   vector<bool> isPrime(n + 1 , true);
   int count = 0 ;
   for (int i = 2; i < n; i++)
   {
     if (isPrime[i])
     {
     count ++ ;

     for (int j = i * 2; j < n; j += i)
     {
      isPrime[j] = false;   
     }
     
     } 
     
   }
   return count ;
}

// 3) Digits of a Number
 void printDig( int n ){
  while (n != 0)
  {
    int digit = n % 10;
    cout << digit << endl;

    n = n / 10;

  }
}
  
   //sum of the digits
   void SumOfDig( int n ){
      int sum = 0;

   while (n != 0)
  {
    int digit = n % 10;
    sum += digit;

    n = n / 10;

  }
  cout << sum << endl;
 }
  
   

    
    int main(){
      //  int n = 45;
      //  cout << primeNumCheck(n) << endl;

      // int n = 900;
      //  cout << primeNumCount(n) << endl;

      int n = 4590;
      printDig(n) ;

      cout << endl;

      int x = 0;
      SumOfDig(x);

      cout << endl;
       return 0;
    }
    
    
