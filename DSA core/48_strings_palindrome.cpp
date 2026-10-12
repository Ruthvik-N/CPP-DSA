# include <iostream>
# include <string>
using namespace std;

//Time complexity: O(n)

bool isPalindrome(string str){ 
       int st = 0 , end = str.size()-1 ;
       while( st < end){
        if (str[st++] != str[end--])
        {
            return false;
        
        } 
       }
       return true;
}

int main() {
    string str;

    cout << "Enter a string: ";
    cin >> str;

    if (isPalindrome(str)) {
        cout << "Palindrome";
    } else {
        cout << "Not a Palindrome";
    }

    return 0;
}