# include <iostream>
# include <string>
using namespace std;

//Time Complexity  : O(n).
//Space Complexity : O(n) because string s is passed by value.
bool isAlphaNum(char ch){
    if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')) {
        return true;
    }
    return false;
}

bool isValidPalindrome(string s) {
    int st = 0 , end = s.length()-1 ;
    while (st < end)
    {
        if ( !isAlphaNum(s[st]))
        {
            st ++ ;
            continue;
        }
        if ( !isAlphaNum(s[end]))
        {
            end--;
            continue;
        }
        if ( tolower(s[st]) != tolower(s[end]))
        {
            return false;
        }
        
        st  ++ ;
        end -- ;
    }
    return true;
    
}


int main(){
    
    cout << isValidPalindrome("race a car") << endl;
    cout << isValidPalindrome(" ") << endl;
    cout << isValidPalindrome("madam") << endl;  
    cout << isValidPalindrome("rate a car") << endl;
    
    
    return 0;
}