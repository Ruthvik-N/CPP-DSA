# include <iostream>
# include <stack>
using namespace std;

// non - sequential container STACK
int main(){
stack<int> myStack;
  myStack.push(10);
  myStack.push(20);
  myStack.push(30);
  myStack.push(40);
  myStack.push(50);

  cout << "Top element in stack is :" << myStack.top() << endl;
  cout << "Size of stack is :" << myStack.size() << endl;

  myStack.pop();
  myStack.pop();
   
  cout << "Top element in stack is :" << myStack.top() << endl;
  
  while ( !myStack.empty()){
    cout  << myStack.top() << " "; 
    myStack.pop();
   }
   cout << endl;

   if (myStack.empty())
    cout << "Yes! Stack is empty";
   return 0; 
}