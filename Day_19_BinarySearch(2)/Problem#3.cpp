#include <iostream>
using namespace std;

    //  3.Find a minimum element in a rotated Array 
int findMin(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        // If mid is greater than end → min in right
        if (arr[mid] > arr[end]) {
            start = mid + 1;
        }
        // Otherwise min in left (including mid)
        else {
            end = mid;
        }
    }

    return arr[start];
}

int main() {
    int arr[] = {7, 8, 9, 0, 1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Minimum element: " << findMin(arr, n);

    return 0;
}