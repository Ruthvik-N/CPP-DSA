# include <iostream>
# include <string>
using namespace std;

// only assuming 'a' to 'z' set.

bool sameFreq(int freq1[] , int freq2[]){
    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
        {
            return false ;
        }
        
    }
    return true;
}

bool checkInc(string s1, string s2) {
      int freq[26] = {0};
      for (int i = 0; i < s1.length(); i++)
      {
        freq[s1[i] - 'a'] ++ ;
      }

      int windowSize = s1.length();
      
      for (int i = 0; i < s2.length(); i++)
      {
        int wIdx = 0 , idx = i ;
         int winFreq[26] = {0};
        while (wIdx < windowSize && idx < s2.length() )
        {
            winFreq[s2[idx] - 'a'] ++ ;
            wIdx ++ ;
            idx ++ ;
        }

        if (sameFreq(freq , winFreq))
        {
           return true;
        }
        
        
      }
      
      return false;

}


int main(){

   cout << checkInc("ab", "eidbaooo") << endl;    
    cout << checkInc("ab", "eidboaoo") << endl;   
    cout << checkInc("adc", "dcda") << endl;       
    cout << checkInc("hello", "ooolleoooleh") << endl; 
    cout << checkInc("a", "abc") << endl;          
    cout << checkInc("abc", "bbbca") << endl;      
 
    return 0;

}