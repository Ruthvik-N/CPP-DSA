
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    int n = nums.size();

    set<vector<int>> s;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {

                if (nums[i] + nums[j] + nums[k] == 0) {

                    vector<int> triplet = {
                        nums[i], nums[j], nums[k]
                    };

                    sort(triplet.begin(), triplet.end());

                    s.insert(triplet);
                }
            }
        }
    }

    cout << "Unique triplets:\n";

    for (auto triplet : s) {
    cout << "[ ";

    cout << triplet[0] << " ";
    cout << triplet[1] << " ";
    cout << triplet[2] << " ";

    cout << "]" << endl;
}

 return 0;
}