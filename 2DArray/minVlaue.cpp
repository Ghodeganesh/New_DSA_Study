#include <iostream>
using namespace std;

// int findMinFrom2D(int arr[][4], int row, int col)
// {
//     int minVal = INT8_MAX;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             minVal = min(minVal, arr[i][j]);
//         }
//     }
//     return minVal;
// }

// int findMaxFrom2D(int arr[][4], int row, int col)
// {
//     int maxVal = INT8_MIN;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             maxVal = max(maxVal, arr[i][j]);
//         }
//     }
//     return maxVal;
// }
// void rowWiseSum(int arr[][4], int row, int col)
// {
//     for (int i = 0; i < row; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < col; j++)
//         {
//             sum = sum + arr[i][j];
//         }
//         cout<<sum;
//         cout<<endl;
//     }
// }
void colWiseSum(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[j][i];
        }
        cout<<sum;
        cout<<endl;
    }
}

int main()
{
    int arr[4][4] = {{1, 2, 3, 4},
                     {10, 2, 19, 3},
                     {3, 3, 83, 5},
                     {7, 23, 22, 30}};
    int row = 4, col = 4;
    // int minVal = findMinFrom2D(arr, row, col);
    // int maxVal = findMaxFrom2D(arr, row, col);
    // rowWiseSum(arr, row, col);
    colWiseSum(arr,row,col);
}