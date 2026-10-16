# include <iostream>
# include <string>
#include <algorithm>
using namespace std;

//reversing words in a string 
// Time Complexity: O(n)
string reverseWords(string s) {
    int n = s.length();
    string ans = "";
    reverse(s.begin() , s.end());

    for (int i = 0; i < n; i++)
    {
        string word = "" ;
        while (i < n && s[i] != ' ')
        {
            word += s[i++];
        }
        
        reverse (word.begin() , word.end());

        if (word.length() > 0)
        {
            ans += " " + word ;
        }
        
    }

    return ans.substr(1);

}

int main(){
   
   cout << reverseWords("the sky is blue") << endl;
   cout << reverseWords("  hello world  ") << endl;
   cout << reverseWords("a good   example") << endl;
   cout << reverseWords("single") << endl;
   cout << reverseWords( "i'm a chess player") << "\n" ;


    return 0;
}

