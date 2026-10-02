#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 1. Initialization
    vector<int> v = {1, 2, 3, 4, 5, 6};

    // 2. Insertion and Deletion
    v.push_back(7);    // Adds 7 to the end -> {1, 2, 3, 4, 5, 6, 7}
    v.pop_back();      // Removes the last element -> {1, 2, 3, 4, 5, 6}

    // 3. Size and Capacity Checks
    cout << "Size: " << v.size() << endl;         // 6
    cout << "Capacity: " << v.capacity() << endl; // Usually >= 8

    // 4. Element Access
    cout << "Element at index 1: " << v[1] << endl;
    cout << "Using .at(2): " << v.at(2) << endl;
    cout << "Front: " << v.front() << " | Back: " << v.back() << endl;

    // 5. Traversal function
    cout << "Vector elements: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}