#include <iostream>
using namespace std;
int main()
{

    int i, row, col, j;
    cout << "Enter no. of rows : ";
    cin >> row;
    cout << "Enter no. of cols : ";
    cin >> col;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}