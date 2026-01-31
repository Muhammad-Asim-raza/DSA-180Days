#include <iostream>
using namespace std;
int main()
{
    // Intermediate Pattern Printing
    // First Pattern:
    //  1
    //  1 2
    //  1 2 3
    //  1 2 3 4
    //  1 2 3 4 5
    //  1 2 3 4 5 6

    int row, column;
    for (row = 1; row <= 6; row++)
    {
        for (column = 1; column <= row; column++)
        {
            cout << column << "  ";
        }
        cout << endl;
    }
    cout << endl
         << endl;

    // Second Pattern:
    //     A
    //     A B
    //     A B C
    //     A B C D
    //     A B C D E
    int ro, col;
    for (ro = 1; ro <= 5; ro++)
    {
        for (col = 1; col <= ro; col++)
        {
            char name = 'A' + col - 1;
            cout << name << "  ";
        }
        cout << endl;
    }
    cout << endl
         << endl;

    //      Third Pattern:
    //    10
    //    10 11
    //    10 11 12
    //    10 11 12 13
    //    10 11 12 13 14
    //    10 11 12 13 14 15

    int r, c;
    for (r = 10; r <= 15; r++)
    {
        for (c = 10; c <= r; c++)
        {
            cout << c << "  ";
        }
        cout << endl;
    }
    cout << endl
         << endl;

    // Fourth Pattern:
    //   A B C D
    //   A B C
    //   A B
    //   A

    int rows, cols;

    for (rows = 4; rows >= 1; rows--)
    { // row goes from 4 to 1
        for (cols = 1; cols <= rows; cols++)
        {
            char name = 'A' + cols - 1;
            cout << name << " ";
        }
        cout << endl;
    }
}