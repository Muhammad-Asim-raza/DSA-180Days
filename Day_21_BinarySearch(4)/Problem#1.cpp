#include <iostream>
using namespace std;

// 1.Find the min(max) distance betwen Aggressive Cows.

bool isPossible(int Arr[], int size, int cows, int mid)
{
    int count = 1;
    int lastPosition = Arr[0];
    for (int i = 1; i < size; i++)
    {
        if (Arr[i] - lastPosition >= mid)
        {
            count++;
            lastPosition = Arr[i];
        }
        if (count == cows)
            return true;
    }
    return false;
}
int stallsAllocation(int Arr[], int size, int cows)
{
    int low = 1;
    int high = Arr[size - 1] - Arr[0];
    int ans = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (isPossible(Arr, size, cows, mid))
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int Stalls[1000] = {3, 5, 8, 11, 17, 18};
    int size = 6;
    int cows = 3;
    int result = stallsAllocation(Stalls, size, cows);
    cout << "The maximum distance among the aggressive cows " << endl;
    cout << "should be: " << result;
}