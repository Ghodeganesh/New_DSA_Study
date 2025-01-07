#include <iostream>
using namespace std;

int lastOccurence(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}

int main()
{
    cout << "Enter target: ";
    int target;
    cin >> target;
    int arr[] = {1, 22, 22, 44, 44, 55, 55, 66};
    int size = sizeof(arr) / sizeof(int);
    int ans = lastOccurence(arr, size, target);

    if (ans>=0)
    {
        cout << "last occurence : " << ans;
    }
    else
    {
        cout << "element not prsent " ;
    }
}