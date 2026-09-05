# include <iostream>
using namespace std;

int main(){
int n;
bool isPrime = true;
 cout <<"enter a number: ";
 cin >> n;
 if (n <= 1) {
    isPrime = false;
}

 for (int i = 2; i <= n-1; i++)
 {  
    if (n%i == 0)
    {
        isPrime = false;
        break;
    }
}
    if (isPrime == true)
    {
        cout << "a prime no" << "\n";
    } else{
        cout << "not a prime no" << "\n";
    }
    
    return 0;
}