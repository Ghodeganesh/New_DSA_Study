#include <iostream>
using namespace std;

int main()
{
    cout << "Hello" << endl;
    int arr[4][4] = {{1, 2, 3, 4}, {4, 3, 2, 1}, {5, 6, 7, 8}, {8, 9, 10, 11}};
    int rowSize = 4;
    int colSize = 4;
    cout << "Normal Array: " << endl;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rowSize; i++)
    {
        if ((i & 1) == 0)
        {
            for (int j = 0; j < colSize; j++)
            {
                cout << arr[j][i]<<" ";
            }
            
        }
        else{
            for(int k=rowSize-1;k>=0;k--){
                cout<<arr[k][i]<<" ";
            }
        }
    }
}