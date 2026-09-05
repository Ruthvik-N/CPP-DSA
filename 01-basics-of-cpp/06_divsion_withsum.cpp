# include <iostream>
using namespace std;

int main(){
  int n,divsum = 0;
  cout << "enter a number: ";
  cin >> n;
  for (int  i = 0; i <= n ; i++)
  {
    if (i%3 == 0)
    {
        divsum += i ;
    }
  }
        
   cout << "Sum is: " << divsum << "\n";

    return 0;
}