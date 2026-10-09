# include <iostream>
# include <map>
using namespace std;

int main(){
// map basic STL practice
map<string,int> myMap;

myMap["tony"] = 36;
myMap["thor"] = 38;
myMap["dr.doom"] = 40;

cout << "Marks of student one of the students is :" <<  myMap["thor"] << endl;

myMap["dr.doom"] = 39;

for (auto marks : myMap)
{
    cout << marks.first << " = " << marks.second << " " ;
}
cout << endl;

myMap.erase("tony");

if( myMap.find("dr.doom") != myMap.end()){
    cout << "found" <<  endl;
}
else { 
    cout << "not found\n" ;
   }

   cout << myMap.size() << endl;
   if (myMap.empty()){
    cout << "yes its empty" << endl;
   }else{
    cout << "Map is not empty\n" ;
   }
   
    return 0;
}