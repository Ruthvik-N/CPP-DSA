# include <iostream>
using namespace std;

int main(){
  int marks;
  cout << "enter your marks: ";
  cin >> marks;
  
  if (marks >= 90)
  {
    cout << "congrats!! your grade is A";
  }else if (marks >= 80 && marks <90)
  {
    cout << "very good! your grade is B";
  } else if (marks >= 70 && marks <80)
  {
    cout << "well tried! your grade is C";
  }else if (marks >= 60 && marks <70)
  {
    cout << "very good! your grade is D";
  }else{
    cout << "prepare better next time!";
  }
    return 0;
}