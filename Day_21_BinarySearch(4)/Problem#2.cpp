#include <iostream>
using namespace std;

// 2.Koko Eating Bananas

bool canFinishBananas(int piles[], int n, int maxHours, int speed)
{
    int totalHours = 0;

    for (int i = 0; i < n; i++)
    {
        totalHours += (piles[i] + speed - 1) / speed;
    }

    if (totalHours <= maxHours)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int EatingSpeed(int piles[], int n, int maxHours)
{

    int low = 1;

    int high = piles[0];
    for (int i = 1; i < n; i++)
    {
        if (piles[i] > high)
        {
            high = piles[i];
        }
    }

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (canFinishBananas(piles, n, maxHours, mid))
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return low;
}
int main()
{
    int bananaPiles[1000] = {3, 7, 8, 11, 15, 19};
    int numberOfPiles = 6;
    int allowedHours = 8;

    int minSpeed = EatingSpeed(bananaPiles, numberOfPiles, allowedHours);

    cout << "Minimum eating speed required: " << minSpeed << " bananas per hour." << endl;
    cout << "This allows Koko to finish all banana piles within "
         << allowedHours << " hours." << endl;

    return 0;
}