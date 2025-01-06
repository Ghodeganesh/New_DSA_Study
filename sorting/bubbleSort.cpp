#include <iostream>
using namespace std;

int main()
{
    // cout<<"hello";
    int arr[] = {2, 22, 11, 2, 1, 33, 4, 55, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "befor swapping: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "after swapping: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}