#include <iostream>
using namespace std;
bool symmetry(int arr[][4],int i,int j){
for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] != arr[j][i])
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    int arr[3][4];

    // input array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    // print array
    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
    }

    if (symmetry(arr,3,4))
    {
        cout << "\nsymmetry" << endl;
    }  
    else
    {
        cout << "\nnot symmetry" << endl;
    }

    return 0;
}