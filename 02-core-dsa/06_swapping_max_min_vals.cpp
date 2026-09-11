# include <iostream>
# include <climits>
using namespace std;

void swapMaxMinValues(int arr[] , int size){
    int smallest_val = 0;
    int largest_val = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < arr[smallest_val])
        {
            smallest_val = i;
        }
        if (arr[i] > arr[largest_val])
        {
            largest_val = i;
        }
    }
     swap(arr[smallest_val],arr[largest_val]);
     cout << "Array after swapped max and min values is: " << endl;
     for (int i = 0; i < size; i++)
     {
        cout << arr[i] << " ";
     }
     cout << endl;
    
}
int main(){
    int myarr[] = {24,56,95,103,106,67,61,56,37,69,303,314};
    int size = sizeof(myarr)/sizeof(myarr[0]);

    swapMaxMinValues(myarr,size);
    return 0;
}