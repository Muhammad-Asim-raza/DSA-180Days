#include <iostream>
#include <vector>
#include <algorithm>

// 5. Pair with given Difference using Binary Search
// Time Complexity for it is 0(N(logN))
using namespace std;
int main()
{
    int Arr[100] = {1, 4, 8, 9, 11, 18, 24, 28, 33};
    int target = 6;
    vector<int> ans;
    bool found = false;
    int n = 9;
    for (int i = 0; i < n; i++)
    {
        int x = target + Arr[i];
        int start = i + 1;
        int end = n - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (x == Arr[mid])
            {
                ans.push_back(Arr[i]);
                ans.push_back(Arr[mid]);
                found = true;
                break;
            }
            else if (x < Arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        if (found)
            break;
    }
    if (found)
    {
        cout << "The differnce of " << ans[0] << " and " << ans[1] << " Gives us " << target;
    }
    else
    {
        cout << "No pair founded";
    }
}