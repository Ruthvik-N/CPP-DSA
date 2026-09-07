# include <iostream>
using namespace std;

int decNumConv(int Binnum){
    int ans = 0,pow=1,rem;

    while(Binnum > 0){
    rem = Binnum % 10;
    ans += rem*pow;
    Binnum = Binnum/10;
    pow *= 2;
    }
    return ans;
}

int main(){
 
 {
    cout << decNumConv(10100) << endl;
 }
    return 0;
}



