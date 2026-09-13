# include <iostream>
# include <climits>
using namespace std;

int main(){
int n = 6;
int myarr[6] = {1,2,3,4,5,6};
int maxSum = INT_MIN;
for (int st = 0; st < n; st++)
{
    int cursum = 0;
    for (int end = st; end < n; end++)
    {
        cursum += myarr[end];
        maxSum = max(cursum,maxSum);
    }
}
 cout << "The maximum value of subarray = " << maxSum << endl;
}

