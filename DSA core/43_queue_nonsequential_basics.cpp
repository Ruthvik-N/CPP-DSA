# include <iostream>
# include <queue>
using namespace std;

// non - sequential container QUEUE
int main(){
queue<int> myQueue;

   myQueue.push(15);
   myQueue.push(25);
   myQueue.push(35);
   myQueue.push(45);
   myQueue.push(55);

   cout << "First element is : " << myQueue.front() << endl;
   cout << "Last element is : " << myQueue.back() << endl;
   cout << "Size of queue is : " << myQueue.size() << endl;

   myQueue.pop();
   myQueue.pop();

   cout << "First element in queue is :" << myQueue.front() << endl;

   while( !myQueue.empty()){
    cout << myQueue.front() << " " ;
    myQueue.pop();
   }
   cout << endl;

   if(myQueue.empty()){
    cout << " yes! Queue is empty" << endl;
   }

   return 0;

}
   
  