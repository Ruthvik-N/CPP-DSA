# include <iostream>
using namespace std;

bool powerOf2check(int n){
    if (n <= 0 )
    {
        return false;
    }
      return (n & (n-1)) == 0;
    
}

int main(){
  int n;
  cout << "enter a number : ";
  cin >> n;
  if (powerOf2check(n))
  {
    cout  << "True" ;
  } else{
    cout << "False";
  }
  
    return 0;
}