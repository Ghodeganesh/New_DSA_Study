#include <iostream>
using namespace std;

int main()
{
    // cout<<"Hello";
    // int arr[4][4] = {{1, 2, 3, 4},
    //                  {5, 6, 7, 8},
    //                  {9, 10, 11, 12},
    //                  {13, 14, 15, 16}};
    // int row = 4;
    // int col = 4;

    // cout << "row wise: " << endl;
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << "col wise: " << endl;
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout << arr[j][i] << " ";
    //     }
    //     cout << endl;
    // }

    // cout << "row==Col" << endl;

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         if (i == j)
    //         {
    //             cout << arr[i][j] << " ";
    //         }
    //     }
    //     cout<<endl;
    // }
    int row, col;
    cout << "enter Rowsize: ";
    cin >> row;

    cout << "enter colsize: ";
    cin >> col;
    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "for the " << i << j<<endl;
            cin >> arr[i][j];
        }
    }

    cout << "Printing 2D Array: " << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}