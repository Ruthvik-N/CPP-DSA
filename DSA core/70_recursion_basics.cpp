# include <iostream>
using namespace std;

long long factCalc(int n){
    if(n == 1 || n == 0) return 1;
    if(n < 0) {
        cout << "Factorial exists only for whole numbers" << endl;
        return -1;
    }
    
    return n * factCalc(n-1);
}

int sumCalc(int n){
    if( n == 1) return 1;
    if(n == 0) return 0;
    if(n < 0)  {
        cout << "entered number must be a whole number" << endl;
    }
    return n + sumCalc(n-1);
}


int main(){

int n = 8;
 cout << factCalc(n) << "\n";

int x = 10;
cout << sumCalc(x) << "\n";

int p = -3;
cout << factCalc(p) << "\n";
    return 0;
}