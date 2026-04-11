#include <iostream>
using namespace std;

//    2.Segregate 0s and 1s using Two Pointers
//  Time Complexity for this is 0(N)
int main()
{
    int Arr[100] = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1};
    int n = 11;
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        if (Arr[start] == 0)
        {
            start++;
        }
        else
        {
            if (Arr[end] == 0)
            {
                swap(Arr[start], Arr[end]);
                start++;
                end--;
            }
            else
            {
                end--;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }
}