#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 0, 1, 0, 0, 0, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "before: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int i = 0;
    int j = size - 1;
    while (i <= j)
    {
        if (arr[i] == 0)
        {
            i++;
        }
        else if (arr[j] == 1)
        {
            j--;
        }
        else
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    cout << "After: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}