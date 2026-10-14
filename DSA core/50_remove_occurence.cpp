# include <iostream>
# include <string>
using namespace std;

string removeOccurences( string s , string part) {
   while (s.length() > 0 &&  s.find(part) < s.length() )
   {
     s.erase( s.find(part) , part.length() );
   }
    
   return s;

}

int main(){

   cout << removeOccurences("daabcbaabcbc", "abc") << endl;
   cout << removeOccurences("axxxxyyyyb", "xy") << endl;
   cout << removeOccurences("hellohello", "hello") << endl;
   cout << removeOccurences("abcdef", "xyz") << endl;
   cout << removeOccurences("aaaaa", "aa") << endl;

 return 0;

}