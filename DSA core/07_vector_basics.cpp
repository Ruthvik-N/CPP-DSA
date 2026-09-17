# include <iostream>
# include <vector>
using namespace std;

int main(){
    // vector<char> vec =  {'a','c','r','y','t'};
    //  cout << "Size = " << vec.size() << endl;
    //  vec.push_back('b'); 
    //  cout << vec.at(5) << endl;
    //  cout << "Size = " << vec.size() << endl;
    //  vec.pop_back();
    //  cout << "Size = " << vec.size() << endl;

    //  cout << vec.at(1);

 vector<int> vec;
 vec.push_back(0);
 vec.push_back(1);
 vec.push_back(2);
 vec.push_back(3);
 vec.push_back(4);
 cout << vec.size() << endl;
 cout << vec.capacity() << endl;

     return 0;
}