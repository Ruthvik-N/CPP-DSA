# include <iostream>
using namespace std;

int main(){
char ch;
   cout <<"enter a character: ";
   cin >> ch;
   if (ch >= 'a' && ch <= 'z')
   {
     cout << "you entered a lowercase letter";
   } else if (ch >= 'A' && ch <= 'Z')
   {
        cout << "you entered an uppercase letter";
   } else
   {
    cout << "not a  letter";
   }

    return 0;
}
