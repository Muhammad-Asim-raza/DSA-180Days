#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// 3.Two Sum using Binary Search
//   Time Complexity here is 0(n(log(n)))
int main()
{
    int Arr[100] = {4, 7, 9, 11, 16, 21, 29, 33, 34, 36};
    int target = 63;
    vector<int> ans;
    int n = 10;
    bool found = false;
    for (int i = 0; i < n - 1; i++)
    {
        int x = target - Arr[i];
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
        cout << "The sum of " << ans[0] << " and " << ans[1] << " Gives us " << target;
    }
}