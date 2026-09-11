# include <iostream>
using namespace std;

void sumAndProduct(int arr[],int size){
 int sum = 0;
 int product = 1;
 for (int i = 0; i < size; i++)
 {
    sum += arr[i];
    product *= arr[i];
 }
    cout << "Sum of elements of array is: " << sum << endl;
    cout << "Product of elements of array is: " << product << endl;

}

int main(){
    int myarr[] = {2,3,47,6,5,9};
    int size = 6;
    sumAndProduct(myarr,size);
    return 0;
}