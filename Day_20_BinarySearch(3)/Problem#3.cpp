#include <iostream>
using namespace std;

  // 3.Capacity To Ship Packages Within D Days.

bool canShip(int Arr[], int n, int days, int mid)
{
    int count = 1;
    int currentweight = 0;
    for (int i=0; i<n; i++)
    {
        if (Arr[i] > mid)
            return false;
        if (currentweight + Arr[i] > mid)
        {
            count++;
            currentweight = Arr[i];
            if (count > days)
                return false;
        }
        else
        {
            currentweight += Arr[i];
        }
    }
    return true;
}
int maxship(int weight[], int size, int days)
{
    int maxvalue = weight[0];
    int total = 0;
    int low, high;
    for (int i = 1; i < size; i++)
    {
        if (weight[i] > maxvalue)
        {
            maxvalue = weight[i];
        }
    }
    low = maxvalue;
    for (int i = 0; i < size; i++)
    {
        total += weight[i];
    }
    high = total;
    int result = total;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (canShip(weight, size, days, mid))
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
    int Weight[1000] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int size = 12;
    int days = 5;
    int shipment = maxship(Weight, size, days);
    cout << "Minimum Capacity To Ship Packages Within 5 Days: " << shipment;
}