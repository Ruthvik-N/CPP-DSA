# include <iostream>
using namespace std;

int factorial(int n){

   int fact = 1;
  
   for ( int i = 1; i <= n; i++)
   {
     fact *= i;
   } 
 return fact;
}
int NcR(int n , int r){
    int n_fact = factorial(n);
    int r_fact = factorial(r);
    int n_mrfact = factorial(n-r);

    return n_fact/(r_fact*n_mrfact);
}
int main(){
    cout << NcR(5,2) << endl;
    cout << NcR(11,7) << endl;

    return 0;
}