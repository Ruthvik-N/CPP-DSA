
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    int n = nums.size();

    set<vector<int>> uniqueTriplets;

    for (int i = 0; i < n; i++) {
        int tar = -nums[i];

        set<int> s;

        for (int j = i + 1; j < n; j++) {
            int third = tar - nums[j];

            if (s.find(third) != s.end()) {
                vector<int> triplet = {
                    nums[i], nums[j], third
                };

                sort(triplet.begin(), triplet.end());
                uniqueTriplets.insert(triplet);
            }

            s.insert(nums[j]);
        }
    }

    cout << "The triplets are:\n";

    for (auto triplet : uniqueTriplets) {
        cout << "[ ";

        for (int x : triplet) {
            cout << x << " ";
        }

        cout << "]" << endl;
    }

    return 0;
}
