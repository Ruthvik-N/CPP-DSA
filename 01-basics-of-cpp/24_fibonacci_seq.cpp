# include <iostream>
using namespace std;

int fiboseries(int n){
    if (n <= 0 )
        return 0;
    if (n == 1)
       return 1;
    int a = 0;
    int b = 1;
    int k = 0;
    for (int i = 2; i <= n; i++)
    {
        k = a + b;
        a = b;
        b = k;
    } 
      return k;
    
}
int main(){
    cout << fiboseries(5) << endl;
    cout << fiboseries(10) << endl;
 return 0;
}