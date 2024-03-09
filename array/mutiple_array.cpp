#include <iostream>
using namespace std;
int main()
{
    int rows1, cols1, rows2, cols2;
    cout << "Enter dimensions of first matrix: ";
    cin >> rows1 >> cols1;
    cout << "Enter dimensions of second matrix: ";
    cin >> rows2 >> cols2;

    if (cols1 != rows2)
    {
        cout << "Cannot multiply matrices with these dimensions." << endl;
        return 1;
    }

    int matrix1[rows1][cols1];
    int matrix2[rows2][cols2];
    int result[rows1][cols2];

    // Read first matrix
    cout << "Enter first matrix:" << endl;
    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < cols1; j++)
            cin >> matrix1[i][j];

    // Read second matrix
    cout << "Enter second matrix:" << endl;
    for (int i = 0; i < rows2; i++)
        for (int j = 0; j < cols2; j++)
            cin >> matrix2[i][j];
    // Multiply matrices
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            int sum = 0;
            for (int k = 0; k < cols1; k++)
            {
                sum += matrix1[i][k] * matrix2[k][j];
            }
            result[i][j] = sum;
        }
    }

   
    // Print result matrix
    cout << "Result matrix:" << endl;
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
