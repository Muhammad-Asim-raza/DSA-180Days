#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
    Demonstration of STL Vector in C++

    This program covers:
    - Insertion (push_back, insert)
    - Deletion (pop_back, erase)
    - Access and modification
    - Sorting (ascending & descending)
    - Binary search
*/

void printVector(const vector<int>& v) {
    for (int val : v) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    // Initialize vector
    vector<int> v = {3, 5, 1, 7, 2, 9, 11, 16, 19};

    // Remove last two elements
    v.pop_back();
    v.pop_back();

    // Erase element at index 3
    v.erase(v.begin() + 3);

    cout << "Size of vector: " << v.size() << endl;
    cout << "Capacity of vector: " << v.capacity() << endl;

    cout << "\nCurrent elements:\n";
    printVector(v);

    // Insert element at position 2
    cout << "\nAfter inserting 40 at index 2:\n";
    v.insert(v.begin() + 2, 40);
    printVector(v);

    // Replace value at index 3
    cout << "\nAfter replacing element at index 3 with 90:\n";
    v[3] = 90;
    printVector(v);

    // Sort in ascending order
    cout << "\nSorted in ascending order:\n";
    sort(v.begin(), v.end());
    printVector(v);

    // Sort in descending order
    cout << "\nSorted in descending order:\n";
    sort(v.begin(), v.end(), greater<int>());
    printVector(v);

    // Binary search (NOTE: must be sorted in ascending order)
    sort(v.begin(), v.end());
    cout << "\nBinary search for 3 (1 = found, 0 = not found):\n";
    cout << binary_search(v.begin(), v.end(), 3) << endl;

    return 0;
}
