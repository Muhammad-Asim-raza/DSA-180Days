#include <iostream>
using namespace std;
        // 4.Find the kth missing positive number 

int findKthPositive(int arr[], int n, int k) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        int missing = arr[mid] - (mid + 1);

        if (missing < k) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return low + k;
}

int main() {
    int arr[] = {2, 3, 4, 7, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 5;

    int result = findKthPositive(arr, n, k);

    cout << "Kth missing number is: " << result << endl;

    return 0;
}