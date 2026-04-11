#include <iostream>
using namespace std;

//  1.Segregate 0s and 1s in an array
//  Time complexity is 0(N) here
int main()
{
    int Arr[100] = {1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1};
    int n = 14;
    int count0 = 0;
    int count1 = 1;
    for (int i = 0; i < n; i++)
    {
        if (Arr[i] == 0)
        {
            count0++;
        }
        else
        {
            count1++;
        }
    }
    for (int i = 0; i < count0; i++)
    {
        Arr[i] = 0;
    }
    for (int i = count0; i < n; i++)
    {
        Arr[i] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }
}