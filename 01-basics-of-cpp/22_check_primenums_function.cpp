# include <iostream>
using namespace std;

int checkprime(int n){
    bool isPrime = true;
    if (n <= 1)
    {
        cout << "Not a Prime Number" << endl;
        return 0;
    }
     
    for (int i = 2; i <= n-1; i++)
    {
        if (n%i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime == true) {
        cout << "Prime Number" << endl;
    } else {
        cout << "Not a Prime Number" << endl;
    }
 return 0;
}

int main(){
    checkprime(6); 
    checkprime(17);
    checkprime(-3);
    checkprime(51);
    checkprime(100);

       return 0;
}