#include <iostream>
using namespace std;
 
        // 2. Search Insert Position Problem

int searchInsert(int arr[], int n, int target)
{
    int start = 0, end = n - 1;
    int ans = n; // default: insert at end

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] >= target)
        {
            ans = mid;     // possible answer
            end = mid - 1; // move left
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[1000];
    cout << "Enter elements (sorted): ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter target: ";
    cin >> target;

    int index = searchInsert(arr, n, target);

    cout << "Insert position: " << index << endl;

    return 0;
}