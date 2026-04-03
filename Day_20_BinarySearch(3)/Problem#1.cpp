#include <iostream>
using namespace std;
bool ispermutated(int Arr[], int size, int student, int maxvalue)
{
    int count = 1;
    int currentpages = 0;
    for (int i = 0; i < size; i++)
    {
        if (Arr[i] > maxvalue)
            return false;
        if (currentpages + Arr[i] > maxvalue)
        {
            count++;
            currentpages = Arr[i];
            if (count > student)
                return false;
        }
        else
        {
            currentpages += Arr[i];
        }
    }
    return true;
}
int allocateBooks(int arr[], int n, int students)
{
    int maxvalue = arr[0];
    int total = 0;
    int mid;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxvalue)
        {
            maxvalue = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }
    int low = maxvalue;
    int high = total;
    int result = high;

    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (ispermutated(arr, n, students, mid))
        {
            result = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return result;
}
int main()
{
    int books[] = {10, 20, 30, 40, 50, 60, 90, 100, 110, 150, 190, 200};
    int n = sizeof(books) / sizeof(books[0]);
    int students = 3;

    int minMaxPages = allocateBooks(books, n, students);

    cout << "Minimum possible maximum pages = " << minMaxPages << endl;

    return 0;
}