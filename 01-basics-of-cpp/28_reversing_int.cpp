# include <iostream>
using namespace std;

int reverseint(int n){
    int reverse = 0;
    while (n > 0)
    {
        int lastDig = n % 10;
        reverse = reverse * 10 + lastDig;
        n = n/10;
        
    }
    return reverse;
}

int main(){
    int num;
   cout << "enter an integer: ";
   cin >> num;
   cout << "reversed number =  " << reverseint(num) << endl;

    return 0;
}