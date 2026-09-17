# include <iostream>
using namespace std;

int sumDig(int n){
int sum = 0;
int lastdig;
while (n > 0)
{
  lastdig = n%10;
  n = n/10;
  sum  += lastdig;
}
    return sum;
}

int main(){
   cout << sumDig(145) << endl;
   cout << sumDig(34)  << endl;
   cout << sumDig(346789)  << endl;
}