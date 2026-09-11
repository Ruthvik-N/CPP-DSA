# include <iostream>
using namespace std;

void reversearray(int arr[] , int size){
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
     swap(arr[start],arr[end]);
     start ++ ;
     end -- ;
    }
}

int main(){
 int myarr[] = {2,3,6,5,8,10,7,9,4} ;
 int size = 9;

 reversearray(myarr,size);
    
 for (int i = 0; i < size ; i++)
 {
    cout << myarr[i] << " ";
 }
 cout << endl;
 return 0;
 
}