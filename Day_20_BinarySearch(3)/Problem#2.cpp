#include <iostream>
using namespace std;

bool isPossible(int boards[], int n, int painters, int maxTime) {
    int painterCount = 1;
    int currentSum = 0;

    for (int i = 0; i < n; i++) {
        // Single board too big
        if (boards[i] > maxTime) return false;

        if (currentSum + boards[i] > maxTime) {
            painterCount++;        // Assign to next painter
            currentSum = boards[i]; // Start new sum

            if (painterCount > painters) return false;
        } else {
            currentSum += boards[i]; // Add to current painter
        }
    }

    return true;
}

int minTime(int boards[], int n, int painters) {
    int maxBoard = boards[0], sumBoards = 0;
    
    // Find max and total
    for (int i = 0; i < n; i++) {
        if (boards[i] > maxBoard) maxBoard = boards[i];
        sumBoards += boards[i];
    }

    int low = maxBoard;
    int high = sumBoards;
    int result = high;

    while (low <= high) {
        int mid = low + (high - low)/2;

        if (isPossible(boards, n, painters, mid)) {
            result = mid;    // Feasible, try smaller
            high = mid - 1;
        } else {
            low = mid + 1;   // Not feasible, try larger
        }
    }

    return result;
}
int main() {
    int boards[] = {10, 20, 30, 40};
    int n = sizeof(boards)/sizeof(boards[0]);
    int painters = 2;

    int minimumTime = minTime(boards, n, painters);

    cout << "Minimum time to paint all boards = " << minimumTime << endl;

    return 0;
}