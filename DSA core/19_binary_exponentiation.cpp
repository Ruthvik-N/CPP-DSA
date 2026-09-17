# include <iostream>
using namespace std;

double calcPow(double x, int n){

    long long binForm = n;
    if (n < 0)
    {
       x = 1/x;
       binForm = -binForm;
    }
    
    double ans = 1;
    while (binForm > 0)
    {
        if (binForm % 2 == 1)
        {
           ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    return ans;
}

int main(){
    double x = 3;
    int n = -2;
    cout <<  calcPow(x,n) << endl;

    return 0;
}