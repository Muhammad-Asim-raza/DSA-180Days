#include <iostream>
using namespace std;

//    Binary Search Problems
    // 1.Find first and last position of same element in a sorted Array
int first(int Arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (Arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (Arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
int last(int Arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (Arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (Arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{
    
    int Arr[1000] = {1, 3, 3, 3, 3, 3, 3, 3, 5, 6, 8, 8, 9};
    int n = 13;
    int key = 3;
    cout << "Key = 3 first occurance is at " << first(Arr, n, key) << "th position in an Array." << endl;
    cout << "Key = 3 last occurance is at " << last(Arr, n, key) << "th position in an Array." << endl;
}