#include <bits/stdc++.h>
using namespace std;

int findMissing(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans = size;
    while (start <= end)
    {
        if (arr[mid] == mid)
        {
            start = mid + 1;
        }
        else if (arr[mid] > mid)
        {
            ans = mid;
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }
    return ans;
}

int main()
{
    cout << "First Missing Element: " << endl;
    cout << "Enter target: ";

    int arr[] = {0,1,3,4};
    int size = sizeof(arr) / sizeof(int);

    sort(arr, arr + size);

    int ans = findMissing(arr, size);
    if (ans >= 0)
    {
        cout << "misisng element: " << ans;
    }
    else
    {
        cout << "element not present";
    }
}