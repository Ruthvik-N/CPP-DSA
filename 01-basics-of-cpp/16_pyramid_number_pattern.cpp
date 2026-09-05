# include <iostream>
using namespace std;

int main(){
 int n;
 cout << "enter a number: ";
 cin >> n;
 int num = 1;
 for (int i = 0; i < n; i++)
 {
    for (int j = 0; j < n-i-1;j++)
    {
        cout << " ";
    }
    for (int j = 1; j < i+1; j++)
    {
        cout << j;
    }
    for (int j = i+1; j > 0; j--)
    {
        cout << j;
    }

    cout << endl;
 }
}