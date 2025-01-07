#include <iostream>
using namespace std;

int main()
{
    // cout<<"hello";
    int arr[] = {1, 2, 2, 33, 33, 44, 54, 66};
    int size = sizeof(arr) / sizeof(int);
    cout << "enter target: ";
    int target;
    cin >> target;
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }

    if (ans == -1)
    {
        cout << "the element is not present";
    }
    else
    {
        cout << "first occurence: " << ans;
    }
}