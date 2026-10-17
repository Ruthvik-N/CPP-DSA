# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
using namespace std;

int compressString (vector <char> &chars){
  int idx = 0 , n = chars.size();
  for (int i = 0; i < n; i++)
  {
    char  ch = chars[i]; 
    int count = 0;
    while (i < n && chars[i] == ch)
    {
        count ++ ; i ++ ;
    }
    if (count == 1)
    {
        chars[idx++] = ch; 
    } else{
        chars[idx++] = ch;
        string str = to_string(count) ;
        for ( char dig : str)
        {
            chars[idx++] = dig;
        }
        
    }

    i -- ;

  }
   chars.resize(idx);
   return idx;
  
}

int main(){

    vector<char> mychar = {'r' , 'r' , 'r' , 's' , 's' , 's' , 'q' , 'r'};
    cout << compressString(mychar) << endl;
    cout << "Compressed string: ";
    for ( char ch : mychar)
    {
        cout << ch << " "  ;
    }
    
    return 0;
}