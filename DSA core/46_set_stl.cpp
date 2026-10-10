# include <iostream>
# include <set>
using namespace std;

int main(){
   set<int> mySet;

   mySet.insert(40);
   mySet.insert(10);
   mySet.insert(30);
   mySet.emplace(20);
   mySet.insert(50);
   mySet.emplace(30);

   for (int nums : mySet)
   {
     cout << nums << " " << endl;
   }
   if(mySet.count(30)){
    cout << "30 exists" << endl;
   }else{
    cout << "numebr doesn't exist" << endl;
   }

   if (mySet.find(50) != mySet.end())
   {
    cout << "Number is  found in set" << endl;
   }else{
    cout << "number not found" << endl;
   }
   cout << mySet.size() << endl;

   mySet.erase(10);
   auto lb = mySet.lower_bound(30);
   auto ub = mySet.upper_bound(40);

   if (lb != mySet.end())
    cout << "Lower bound: " << *lb << endl;

if (ub != mySet.end())
    cout << "Upper bound: " << *ub << endl;
   
    return 0;
}