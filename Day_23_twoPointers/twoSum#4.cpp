#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// 4.Two sum using pointers
int main()
{
    int Arr[100] = {1, 4, 8, 9, 14, 19, 22, 27};
    int target = 23;
    int n = 8;
    vector<int> result;
    bool present = false;
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        if (Arr[start] + Arr[end] == target)
        {
            result.push_back(Arr[start]);
            result.push_back(Arr[end]);
            present = true;
            break;
        }
        else if (Arr[start] + Arr[end] > target)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
    if (present)
    {
        cout << "The sum of " << result[0] << " and " << result[1] << " Gives us " << target;
    }
    else
    {
        cout << "No pair founded";
    }
}