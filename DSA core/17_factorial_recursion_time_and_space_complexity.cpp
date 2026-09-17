# include <iostream>
using namespace std;

//An Example to demonstrate Time % space complexity
// Recursive Factorial
// Time Complexity: O(n) - n + 1 recursive calls
// Space Complexity: O(n) - call stack memory.

int MyFact(int n){
    if (n == 0 || n == 1)
    {
        return 1;
    }
    
    return n * MyFact(n-1);
}

int main(){
   int n = 8;
   cout <<"Factorial of  " << n << " is : "  << MyFact(n) << endl;
   
return 0;
}