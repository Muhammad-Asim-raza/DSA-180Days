#include <iostream>
#include <algorithm>
using namespace std;
int main()
{

    //  2: Insertion Sort Algorithm to sort the array of integers in increasing
    //     order if we start from the last element of the array.
    int Arr[1000];
    int n;
    cout << "Enter the size of an Array: ";
    cin >> n;
    cout << "Enter the values in your Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = i; j < n; j++)
        {
            if (Arr[j] > Arr[j - 1])
            {
                swap(Arr[j], Arr[j - 1]);
            }
            else
                break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }
}