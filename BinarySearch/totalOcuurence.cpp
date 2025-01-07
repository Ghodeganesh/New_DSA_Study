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

int firstOccurence(int arr[], int size, int target)
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
            end = mid - 1;
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
    cout << "First and Last occurence: " << endl;
    cout << "Enter target: ";
    int target;
    cin >> target;
    int arr[] = {1, 22, 22, 44, 44,45, 55, 55, 66};
    int size = sizeof(arr) / sizeof(int);
    int ans1 = lastOccurence(arr, size, target);
    int ans2 = firstOccurence(arr, size, target);
    int total = ans1 - ans2 + 1;
    if (ans1 >= 0 && ans2 >= 0)
    {
        cout << "total occurence: " << total;
    }
    else
    {
        cout << "element not present";
    }
}