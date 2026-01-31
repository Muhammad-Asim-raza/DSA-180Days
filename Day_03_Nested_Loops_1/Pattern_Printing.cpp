#include <iostream>
using namespace std;
int main()
{
    // NESTED LOOPS QUESTIONS

    // 1.First Pattern:
    //     4 4 4 4 4 4
    //     4 4 4 4 4 4
    //     4 4 4 4 4 4
    //     4 4 4 4 4 4
    //     4 4 4 4 4 4
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5; col++)
        {
            cout << 4 << " ";
        }
        cout << endl;
    }
    cout << endl;

    //  2.Second Pattern:
    //        1 4 9 16 25
    //        1 4 9 16 25
    //        1 4 9 16 25
    //        1 4 9 16 25
    //        1 4 9 16 25

    int r, c;
    for (r = 1; r <= 5; r++)
    {
        for (c = 1; c <= 5; c++)
        {
            cout << c * c << " ";
        }
        cout << endl;
    }
    cout << endl;

    //   3.Third Pattern:

    // 1 8 27 64 125 216
    // 1 8 27 64 125 216
    // 1 8 27 64 125 216
    // 1 8 27 64 125 216
    // 1 8 27 64 125 216

    int ro, co;
    for (ro = 1; ro <= 5; ro++)
    {
        for (co = 1; co <= 6; co++)
        {
            cout << co * co * co << " ";
        }
        cout << endl;
    }
    cout << endl;

    //  4.Fourth Pattern:
    //       F G H I J K
    //       F G H I J K
    //       F G H I J K
    //       F G H I J K
    //       F G H I J K
    int name;
    char column;

    for (name = 1; name <= 5; name++)
    {
        for (column = 'F'; column <= 'K'; column++)
        {
            cout << column << " ";
        }
        cout << endl;
    }
    cout << endl;
}