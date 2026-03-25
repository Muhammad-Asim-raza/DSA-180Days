#include <iostream>
using namespace std;
//    2. Find an Element in a Rotated Array
int search(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[start] <= arr[mid])
        {

            if (target >= arr[start] && target < arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        else
        {

            if (target > arr[mid] && target <= arr[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main()
{
    int arr[] = {50, 60, 70, 80, 90, 100, 10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int result = search(arr, n, target);

    if (result != -1)
    {
        cout << "Target found at index: " << result;
    }
    else
    {
        cout << "Target not found";
    }

    return 0;
}