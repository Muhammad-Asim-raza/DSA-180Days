#include <iostream>
using namespace std;
             
        //   3.Find the square root using binary search 
int sqrtBinary(int n) {
    int start = 0, end = n;
    int ans = -1;

    while (start <= end) {
        long long mid = start + (end - start) / 2;

        if (mid * mid == n) {
            return mid;  // perfect square
        }
        else if (mid * mid < n) {
            ans = mid;        // store possible answer
            start = mid + 1;  // move right
        }
        else {
            end = mid - 1;    // move left
        }
    }

    return ans;  // floor value
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << "Square root (integer): " << sqrtBinary(n) << endl;

    return 0;
}