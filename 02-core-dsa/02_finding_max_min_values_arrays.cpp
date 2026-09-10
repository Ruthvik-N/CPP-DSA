# include <iostream>
# include <climits>
# include <algorithm>
using namespace std;

int main(){
    int smallest_val = INT_MAX;
    int largest_val = INT_MIN;
 int mynums[] = {100,97,93,95,99,98,89,87,83};
 int size = 9;
 if (size == 0)
 {
    cout << "Array is empty" << endl;
    return 0;
 }
 
 for (int i = 0; i < size; i++)
 {
    smallest_val = min(mynums[i],smallest_val);
    largest_val = max(mynums[i],largest_val);

 }
    cout << "Smallest value = " << smallest_val << endl;
    cout << "Largest value = "  <<  largest_val << endl;
    return 0;
}
