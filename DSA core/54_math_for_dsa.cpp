# include <iostream>
# include <vector>
# include <math.h>
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
 //3 Armstrong number
  
   bool isArmstrongNum( int n){
      int sum = 0;
      int original = n;
      
      while (n != 0)
      {
         int digit = n % 10;
         sum += pow(digit,3);

         n = n / 10;
         
      }

      if (sum == original)
      {
         return true;
         cout << "Number entered is an Armstrong number" <<" " << n << endl;
      }else{
         return false;
      }
      
   }

   // 4 Euclid's Algorithm
   //for finding HCF or GCD (Highest common factor OR Greatest common  divisor)

int gcd ( int a, int b){
      while ( a > 0 && b > 0 )
   {
      if (a > b)
      {
         a = a % b ;
      }
      else if (a < b)
      {
         b = b % a ;
      }else return a ; 
      
   }
   
   if (a == 0) return b;
   return a;
   
}

//5 LCM-(Least Common Multiple)
  int lcm (int a , int b){
   if (a == 0 || b == 0) return 0;
   
   
     int hcf = gcd( a , b);
     int lcm = (a /hcf) * b ;

   return lcm;
  }

  //6 Reverse Number
  int reverseNum(int n){
   int revNum = 0;

   while (n != 0)
   {
     int dg = n % 10;

      if (revNum > INT_MAX/10 || revNum < INT_MIN/10 ) return 0;

      revNum = revNum * 10 + dg;
      n = n / 10;
   
   }
   
   return revNum ;

  }

  //7 Palindrome Number

  int PalindromeCheck(int x){
      if (x < 0) return false;

      int revNum = reverseNum(x);
      return x == revNum;

      
  }
    
    int main(){
      //  int n = 45;
      //  cout << primeNumCheck(n) << endl;

      // int n = 900;
      //  cout << primeNumCount(n) << endl;

      // int n = 4590;
      // printDig(n) ;

      // cout << endl;

      // int x = 0;
      // SumOfDig(x);

      // cout << endl;

      // int n = 407;
      // if (isArmstrongNum(n))
      // {
      //   cout << "Is an Armstrong Number" << endl;
      // }
      // else{
      //    cout << "Not an armstrong Number" << endl;
      // }
      // cout << gcd(123, 648) <<  endl;
      // cout << gcd(0,45) << endl;
      // cout << gcd(0,0) << endl;
      // cout << gcd(30,0) << endl;
      // cout << gcd(35,70) << endl;


      // cout << lcm(30,36) << endl;
      // cout << lcm(37,51) << endl;
      // cout << lcm(0,3) << endl;
      // cout << lcm(5,0) << endl;

      //  cout << reverseNum(4560) << endl;
      //  cout << reverseNum(-369) << endl;         
      //  cout << reverseNum(1200) << endl;         
      //  cout << reverseNum(0) << endl;            
      //  cout << reverseNum(7) << endl;            
      //  cout << reverseNum(1534236469) << endl;   
      //  cout << reverseNum(1463847412) << endl;   
      //  cout << reverseNum(-2147483648) << endl;
       int a = 23432;
       int b = -2332;
       int c = 9999;
       int d = 000;
      if ( PalindromeCheck(a))
       cout << "Number is a Palindrome number" << endl;
      else 
      cout <<"Number is not a Palindrome number" << endl;

       return 0;
    }
    
    
