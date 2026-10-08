# include <iostream>
# include <queue>
using namespace std;

int main(){

// priority queue STL practice
priority_queue<int>pq;

  pq.push(4);
  pq.push(10);
  pq.push(2);
  pq.push(6);
  pq.push(9);

  cout << "Top element is: " << pq.top() << endl;
  cout << "Size of priority queue is : " << pq.size() << endl;
  pq.pop();
  pq.pop();

  cout << "Top element is: " << pq.top() << endl;
  while (!pq.empty()){
    cout << pq.top() << " " ;
    pq.pop();
  }
  cout << endl;
  if (pq.empty())
  {
    cout << "Yes! priority queue is empty" <<  endl;
  }
  
    return 0;
}