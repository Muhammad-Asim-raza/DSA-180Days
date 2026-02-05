#include <iostream>
using namespace std;
int main()
{
    //   1.First Pattern: Take an input n from the user, and create
    //   a pattern like below, for n=5, we have output like this.

    //          1
    //        2 1
    //      3 2 1
    //    4 3 2 1
    //  5 4 3 2 1

    int col, row;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5 - row; col++)
        {
            cout << "  ";
        }
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl
         << endl;

    // Second Pattern: Take an input n from the user, and create a pattern like
    //                 below, for n=5, we have output like this.

    //               A
    //           B B
    //        C C C
    //    D D D D
    // E E E E E

    int rows, columns;
    for (rows = 1; rows <= 5; rows++)
    {
        for (columns = 1; columns <= 5 - rows; columns++)
        {
            cout << "  ";
        }
        char name = 'A' + rows - 1;
        for (columns = 1; columns <= rows; columns++)
        {
            cout << name << " ";
        }
        cout << endl;
    }
    cout << endl
         << endl;

    //    3: Take an input n from the user, and create a pattern like below,
    //  for n=5, we have output like this.

    //                 5
    //               5 4
    //             5 4 3
    //           5 4 3 2
    //         5 4 3 2 1
    int ro, co;
    for (ro = 1; ro <= 5; ro++)
    {
        for (co = 1; co <= 5 - ro; co++)
        {
            cout << "  ";
        }
        for (co = 5; co >= 5 - (ro - 1); co--)
        {
            cout << co << " ";
        }
        cout << endl;
    }
    cout << endl
         << endl;

    // 4: Take an input n from the user, and create a pattern like below, fo
    //    n=5, we have output like this.

    //              E
    //            E D
    //          E D C
    //        E D C B
    //      E D C B A
    int lines,cols;
    char alpha;
    for(lines=1; lines<=5; lines++){
       for(cols=1;cols<=5-lines; cols++){
        cout<<"  ";
       }for(alpha='E'; alpha>='E'-(lines-1); alpha--){
        cout<<alpha<<" ";
       }cout<<endl;
    }
}