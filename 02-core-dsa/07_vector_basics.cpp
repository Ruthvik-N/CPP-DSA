# include <iostream>
# include <vector>
using namespace std;

int main(){
    vector<char> vec =  {'a','c','r','y','t'};
     cout << "Size = " << vec.size() << endl;
     vec.push_back('b'); 
     cout << vec.at(5) << endl;
     cout << "Size = " << vec.size() << endl;
     vec.pop_back();
     cout << "Size = " << vec.size() << endl;

     cout << vec.at(1);

     return 0;
}