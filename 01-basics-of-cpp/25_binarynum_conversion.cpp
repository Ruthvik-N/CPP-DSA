# include <iostream>
using namespace std;

int decBinConv(int decnum){
 int rem,pow = 1,ans = 0;

while (decnum > 0)
{
    rem = decnum % 2;
    decnum = decnum/2;
    ans += (rem*pow);
    pow *= 10;
}
   return ans;
}

int main(){
 cout << decBinConv(45) << endl;
}


