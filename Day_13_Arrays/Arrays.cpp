#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{

    //  1. Searching your value in an Array.
    int arr[6] = {13, 33, 45, 6, 2, 4};
    int x = 6;
    bool found = false;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == x)
        {
            cout << "Your value found in an Array." << endl
                 << endl;
            found = true;
            break;
        }
    }
    if (found == false)
    {
        cout << "Your value does not found in an Array." << endl
             << endl;
    }

    //  2. Reversing an Array
    int Arr[6] = {23, 6, 4, 95, 34, 75};
    int i = 0, j = 5;
    cout << "Your Array in reversed order is: " << endl;
    while (i < j)
    {
        swap(Arr[i], Arr[j]);
        i++;
        j--;
    }
    for (int k = 0; k < 6; k++)
    {
        cout << Arr[k] << "  ";
    }
    cout << endl
         << endl;

    //  3. Finding Second Max Number in an Array
    int Arra[6] = {23, 5, 6, 7, 34, 43};
    int ans = INT_MIN;
    int second = INT_MIN;
    for (int i = 0; i < 6; i++)
    {
        if (Arra[i] > ans)
        {
            ans = Arra[i];
        }
    }
    cout << ans << " is the maximum value in an Array." << endl;
    for (int i = 0; i < 6; i++)
    {
        if (Arra[i] != ans)
        {
            second = max(second, Arra[i]);
        }
    }
    cout << second << " is the second max value in an Array." << endl;

    //  4.Find missing number in an Array.
    int Array[5] = {1, 3, 4, 5};
    int num = 5;
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += Array[i];
    }
    int answer = num * (num + 1) / 2;
    int miss = answer - sum;
    cout << miss << " is the missing number in an Array." << endl
         << endl;

    // 5.Find Fibonacci Series
    int n;
    cout << "Enter your Number: ";
    cin >> n;
    int Arrays[1000];
    Arrays[0] = 0;
    Arrays[1] = 1;
    for (int i = 2; i < n; i++)
    {
        Arrays[i] = Arrays[i - 1] + Arrays[i - 2];
    }
    cout << Arrays[n - 1] << " is the fibonacci number present at " << n << "th number." << endl
         << endl;

    // 6.Rotating Array by 1.
    int Arrey[5] = {1, 3, 4, 5, 6};
    int temp = Arrey[4];
    for (int i = 4; i >= 1; i--)
    {
        Arrey[i] = Arrey[i - 1];
    }
    Arrey[0] = temp;
    cout << "Given Array Rotated by 1 in Clockwise Direction. " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << Arrey[i] << " ";
    }
    cout << endl
         << endl;
}