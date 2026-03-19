#include <iostream>
using namespace std;
            //  5.Count the Zeroes in Array 
int countZeros(int arr[], int n) {
    int low = 0, high = n - 1;
    int ans = n; // assume no 1 exists

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == 1) {
            ans = mid;        // possible answer
            high = mid - 1;   // go left (find earlier 1)
        } else {
            low = mid + 1;    // go right
        }
    }

    return ans;
}

int main() {
    int arr[] = {0, 0, 0, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << countZeros(arr, n);

    return 0;
}