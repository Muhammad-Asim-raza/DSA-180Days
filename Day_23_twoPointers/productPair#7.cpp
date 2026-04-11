#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 7. Multiply two numbers to find the target using TWO POINTERS
// Time Complexity for it is 0(N)
int main()
{
    int Arr[100] = {1, 4, 8, 9, 11, 18, 24, 28, 33};
    int target = 88;
    vector<int> ans;
    bool found = false;
    int n = 9;
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        int diff = Arr[start] * Arr[end];
        if (diff == target)
        {
            ans.push_back(Arr[start]);
            ans.push_back(Arr[end]);
            found = true;
            break;
        }
        else if (diff < target)
        {
            start++;
        }
        else
            end--;
    }
    if (found)
    {
        cout << "The Product of " << ans[0] << " and " << ans[1] << " Gives us " << target;
    }
    else
    {
        cout << "No pair founded";
    }
}