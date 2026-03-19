#include <iostream>
using namespace std;

// Find first occurrence
int firstOcc(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            ans = mid;
            high = mid - 1; // go left
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return ans;
}

// Find last occurrence
int lastOcc(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            ans = mid;
            low = mid + 1; // go right
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return ans;
}

int countOccurrences(int arr[], int n, int key) {
    int first = firstOcc(arr, n, key);
    int last = lastOcc(arr, n, key);

    if (first == -1) return 0; // not found

    return last - first + 1;
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 2;

    cout << "Occurrences: " << countOccurrences(arr, n, key);

    return 0;
}