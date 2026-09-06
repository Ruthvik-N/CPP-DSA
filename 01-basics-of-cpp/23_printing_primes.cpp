#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;

    for (int i = 2; i * i <= num; i++) { 
        if (num % i == 0) return false;
    }
    return true;
}


void printPrimes(int n) {
    if (n < 2) {
        cout << "No prime numbers in range 1 to " << n << endl;
        return;
    }

    cout << "Prime numbers up to " << n << ": ";
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    printPrimes(10); 
    printPrimes(100);
    printPrimes(45);


    return 0;
}