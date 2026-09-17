#include <iostream>
using namespace std;

// An example to demonstrate time and space complexity 
// Recursive Fibonacci
// Time Complexity: O(2^n) - exponential binary recursion tree
// Space Complexity: O(n) - maximum depth of the call stack
int fib(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n = 10;
    cout << "Fibonacci term at index " << n << " is: " << fib(n) << endl;
    return 0;
}