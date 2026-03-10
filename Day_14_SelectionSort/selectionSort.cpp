#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //                        SELECTION SORTING
    // 1.Sorting an Array in an ascending order using Selection Sorting

    int Arr[1000];
    int n;
    cout << "Enter size of your array: ";
    cin >> n;
    cout << "Enter the element in an array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }
    cout << "Applied Selection Sorting To Given Array = ";
    for (int j = 0; j < n - 1; j++)
    {
        int index = j;

        for (int i = j + 1; i < n; i++)
        {
            if (Arr[i] < Arr[index])
            {
                index = i;
            }
        }

        swap(Arr[j], Arr[index]);
    }

    for (int k = 0; k < n; k++)
    {
        cout << Arr[k] << " ";
    }
    cout << endl
         << endl;

    //  2.Selection Sorting on a Fixed Array

    int Array[6] = {23, 5, 93, 8, 37, 86};
    cout << "Selection Sorting on a Fixed Array = ";
    for (int i = 5; i > 0; i--)
    {
        int index = i;
        for (int j = i - 1; j >= 0; j--)
        {
            if (Array[j] > Array[index])
            {
                index = j;
            }
        }
        swap(Array[i], Array[index]);
    }
    for (int i = 0; i < 6; i++)
    {
        cout << Array[i] << "  ";
    }
    cout << endl
         << endl;

    // 3.Sorting an Array in a descending order using SelectionSort

    int Arrays[1000] = {34, 6, 77, 24, 57, 32, 4};
    cout << "Array in descending order= ";
    for (int i = 0; i < 6; i++)
    {
        int index = i;
        for (int j = i + 1; j <= 6; j++)
        {
            if (Arrays[j] > Arrays[index])
            {
                index = j;
            }
        }
        swap(Arrays[i], Arrays[index]);
    }
    for (int i = 0; i <= 6; i++)
    {
        cout << Arrays[i] << " ";
    }
    cout << endl
         << endl;

    //  4.Selection Sort Algorithm to sort the array of char in ascending order.

    char Arra[1000];
    int num;
    cout << "Enter number of characters: ";
    cin >> num;
    cout << "Enter characters: ";
    for (int i = 0; i < num; i++)
    {
        cin >> Arra[i];
    }

    // Selection Sort
    for (int i = 0; i < num - 1; i++)
    {
        int index = i;

        for (int j = i + 1; j < num; j++)
        {
            if (Arra[j] < Arra[index])
            {
                index = j;
            }
        }

        swap(Arra[i], Arra[index]);
    }

    cout << "Sorted characters in ascending order: ";
    for (int i = 0; i < num; i++)
    {
        cout << Arra[i] << " ";
    }
}