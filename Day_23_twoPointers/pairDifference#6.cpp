#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 6. Pair with given Difference using Two Pointers
// Time Complexity for it is 0(N)
int main()
{
    int Arr[100] = {1, 4, 8, 9, 11, 18, 24, 28, 33};
    int target = 6;
    vector<int> ans;
    bool found = false;
    int n = 9;
    int start = 0;
    int end = 1;
    while (end < n)
    {
        int difference = Arr[end] - Arr[start];
        if (difference == target)
        {
            ans.push_back(Arr[start]);
            ans.push_back(Arr[end]);
            found = true;
            break;
        }
        else if (difference < target)
        {
            end++;
        }
        else
        {
            start++;
        }
        if (start == end)
            end++;
    }
    if (found)
    {
        cout << "The difference of " << ans[0] << " and " << ans[1] << " Gives us " << target;
    }
    else
    {
        cout << "No pair founded";
    }
}