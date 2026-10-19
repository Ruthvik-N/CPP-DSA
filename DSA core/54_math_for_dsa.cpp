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



    
    int main(){
      //  int n = 45;
      //  cout << primeNumCheck(n) << endl;

      int n = 900;
       cout << primeNumCount(n) << endl;
       return 0;
    }
    
    
