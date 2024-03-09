#include <iostream>
using namespace std;

// int ROWS = 3;
// int COLS = 3;
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int transpose[3][3];
    int i, j;
    cout << "The original matrix is.." << endl;
    for (i = 0; i < 3; i++)
    {
        cout << endl;
        for (j = 0; j < 3; j++)
        {
            cout << arr[i][j] << "\t";
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }
    cout << "\nThe transpose of the matrix is.." << endl;
    for (i = 0; i < 3; i++)
    {
        cout << endl;
        for (j = 0; j < 3; j++)
        {
            cout << transpose[i][j] << "\t";
        }
    }
    return 0;
}
