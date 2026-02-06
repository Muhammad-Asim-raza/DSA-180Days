#include <iostream>
using namespace std;
int main()
{
    //    1. Print the following pattern
    //                 *
    //             *   *   *
    //         *   *   *   *   *
    //     *   *   *   *   *   *   *
    // *   *   *   *   *   *   *   *   *

    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5 - row; col++)
        {
            cout << "  ";
        }
        for (col = 1; col <= 2 * row - 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    //     2. print the following pattern.
    //                1
    //             1   2   1
    //         1   2   3   2   1
    //     1   2   3   4   3   2   1
    // 1   2   3   4   5   4   3   2   1

    int rows, cols;
    for (rows = 1; rows <= 5; rows++)
    {
        for (cols = 1; cols <= 5 - rows; cols++)
        {
            cout << "  ";
        }
        for (cols = 1; cols <= rows; cols++)
        {
            cout << cols << " ";
        }
        for (cols = rows - 1; cols >= 1; cols--)
        {
            cout << cols << " ";
        }
        cout << endl;
    }
    cout << endl
         << endl;

    // 3.Print the following pattern

    //     * * * * * * * * *
    //       * * * * * * *
    //         * * * * *
    //           * * *
    //             *
    //    Method 1
    int ro, co;
    for (ro = 1; ro <= 5; ro++)
    {
        for (co = ro - 1; co >= 1; co--)
        {
            cout << "  ";
        }
        for (co = 11 - 2 * ro; co >= 1; co--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl
         << endl;

    // Method 2
    int line, column;
    for (line = 5; line >= 1; line--)
    {
        for (column = 1; column <= 5 - line; column++)
        {
            cout << "  ";
        }
        for (column = 1; column <= 2 * line - 1; column++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl
         << endl;

    //  4th. Print the following pattern
    //  * * * * * * * *
    //  * * *     * * *
    //  * *         * *
    //  *             *
    //  *             *
    //  * *         * *
    //  * * *     * * *
    //  * * * * * * * *
    int lines, columns;
    for (lines = 4; lines >= 1; lines--)
    {
        for (columns = 1; columns <= lines; columns++)
        {
            cout << "* ";
        }
        for (columns = 1; columns <= 8 - 2 * lines; columns++)
        {
            cout << "  ";
        }
        for (columns = 1; columns <= lines; columns++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (lines = 1; lines <= 4; lines++)
    {
        for (columns = 1; columns <= lines; columns++)
        {
            cout << "* ";
        }
        for (columns = 1; columns <= 8 - 2 * lines; columns++)
        {
            cout << "  ";
        }
        for (columns = 1; columns <= lines; columns++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl
         << endl;

          //  5th. Print the following pattern
     // *             *
    //  * *         * *
    //  * * *     * * *
    //  * * * * * * * *
    //  * * *     * * *
    //  * *         * *
    //  *             *
    int row1, col1;
    for (row1 = 1; row1 <= 4; row1++)
    {
        for (col1 = 1; col1 <= row1; col1++)
        {
            cout << "* ";
        }
        for (col1 = 1; col1 <= 8 - 2 * row1; col1++)
        {
            cout << "  ";
        }
        for (col1 = 1; col1 <= row1; col1++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (row1 = 3; row1 >= 1; row1--)
    {
        for (col1 = 1; col1 <= row1; col1++)
        {
            cout << "* ";
        }
        for (col1 = 1; col1 <= 8 - 2 * row1; col1++)
        {
            cout << "  ";
        }
        for (col1 = 1; col1 <= row1; col1++)
        {
            cout << "* ";
        }
        cout << endl;
    }cout<<endl<<endl;
//     6th. Print the following pattern
//      *
//     * *
//    * * *
//   * * * *
//    * * *
//     * *
//      *
    int row2,col2;
    for(row2=1; row2<=4; row2++){
        for(col2=1; col2<=4-row2; col2++){
            cout<<" ";
        }for(col2=1; col2<=row2; col2++){
            cout<<"* ";
        }cout<<endl;
    }for(row2=3; row2>=1; row2--){
        for(col2=1; col2<=4-row2; col2++){
            cout<<" ";
        }for(col2=1; col2<=row2; col2++){
            cout<<"* ";
        }cout<<endl;
    }cout<<endl<<endl;

//     7th. Print the following pattern
    
//               A
//             A B A
//           A B C B A
//         A B C D C B A
//       A B C D E D C B A
int row3,col3;
char alpha;
for(row3=1; row3<=5; row3++){
    for(col3=1; col3<=5-row3; col3++){
        cout<<"  ";
    }for(alpha='A'; alpha<='A'+row3-1; alpha++){
        cout<<alpha<<" ";
    }for(alpha='A'+row3-2; alpha>='A'; alpha--){
        cout<<alpha<<" ";
    }cout<<endl;
}

}