# include <iostream>
# include <list>
using namespace std;

int main(){
 
    list<int> mylist = {10 , 20 , 30 ,40};

    mylist.emplace_front(5);
    mylist.emplace_back(6);
    for (int val : mylist)
    {
        cout << val << " " ;
    }
    cout << endl;
    
    // mylist.pop_front();
    // mylist.pop_back();

    //  for (int val : mylist)
    // {
    //     cout << val << " " ;
    // }
    // cout << endl;

   cout << "element at idx 1 is : " << mylist.front() << endl;
   cout << "element at idx n-1 is : " << mylist.back()  << endl;
   cout << "size of list is: " << mylist.size()   << endl;


   for ( auto it = mylist.begin() ; it != mylist.end() ; it++)
   {
    cout << *(it) << " " ;
   }
   cout << endl;

   list<int> :: iterator ite;
    ite = mylist.begin();
   advance(ite,3);
   mylist.insert(ite,37);

   ite = mylist.begin();
   advance(ite ,5);
   mylist.erase(ite);

   for (int nums : mylist)
   {
    cout << nums << " " ;
   }
    cout << endl;


   
   for ( auto it2 = mylist.rbegin() ; it2 != mylist.rend() ; it2++)
   {  
    cout << *(it2) << " " ;
   }
   cout << endl;
   
// mylist.clear();
// for (int nums : mylist)
// {
//     cout << nums << " " ;
// }
//  cout << endl;

return 0;
}
