#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //    BUBBLE SORTING
    // 1: Sorting an array in Ascending Order using bubble sort
    int Arr[1000];
    int n ;
    cout<<"Enter the size of an Array: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>Arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = 0;
        for (int j = 0; j < n - i-1; j++)
        {
            if (Arr[j] > Arr[j + 1])
            {
                swapped = 1;
                swap(Arr[j], Arr[j + 1]);
            }
        }
        if (swapped == 0)
            break;
    }
    for (int i=0; i<n; i++){
        cout<<Arr[i]<<" ";
    }
}