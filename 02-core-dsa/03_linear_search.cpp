# include <iostream>
using namespace std;

int linearcheck(int arr[], int size , int target){
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == target)
    {
            cout << "Target number is: " << target << endl;
            cout << "Found at index: "; // Print label here
            return i;
    }
 }
 return -1;
}

int main(){
  int myarr[] = {1,2,5,7,4,9,8} ;
   int size = 7;
   int target = 8;
   cout << linearcheck(myarr,size,target);
   return 0;
}