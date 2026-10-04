# include <iostream>
# include <deque>
using namespace std;


int main(){
deque<int> d = {10, 20, 30, 40, 50};
  
for (int nums : d)
{
    cout << nums << " " ;
}

d.push_front(5);
d.push_back(60);
for (int nums : d)
{
    cout << nums << " " ;
}
cout << endl;
d.pop_back();
d.pop_front();
for (int nums : d)
{
    cout << nums << " " ;
}
cout << endl;
cout << d[3] << endl;

deque<int> :: iterator it = d.begin();
  advance(it,3);
  d.insert(it,45);
for (int nums : d)
{
    cout << nums << " " ;
}
cout << endl;

it = d.begin();
   advance(it,4);
   d.erase(it);
   for (int nums : d)
{
    cout << nums << " " ;
}
cout << endl;
cout <<"first element is: " << d.front() << endl;
cout <<"last element is: " << d.back() << endl;
cout <<"Size of deque is: " << d.size() << endl;

return 0;

}
