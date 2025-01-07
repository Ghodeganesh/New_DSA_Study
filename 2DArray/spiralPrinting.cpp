#include <iostream>
using namespace std;

int main()
{
    // cout<<"spiral prinitng"<<endl;
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {10, 11, 12, 13}, {14, 15, 16, 17}};

    int top = 0;
    int bottom = 3;
    int left = 0;
    int right = 3;
    int count = 4 * 4;

    cout << "Before: " << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "spiral printing: " << endl;

    while (count > 0)
    {
        // Traverse from left to right
        for (int i = left; i <= right && count > 0; i++)
        {
            cout << arr[top][i] << " ";
            count--;
        }
        top++;

        // Traverse from top to bottom
        for (int i = top; i <= bottom && count > 0; i++)
        {
            cout << arr[i][right] << " ";
            count--;
        }
        right--;

        // Traverse from right to left
        for (int i = right; i >= left && count > 0; i--)
        {
            cout << arr[bottom][i] << " ";
            count--;
        }
        bottom--;

        // Traverse from bottom to top
        for (int i = bottom; i >= top && count > 0; i--)
        {
            cout << arr[i][left] << " ";
            count--;
        }
        left++;
    }
}