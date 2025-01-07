#include <iostream>
using namespace std;

int main()
{
    // cout<<"hello";
    int arr[] = {1, 2, 11, 12, 15, 33, 44, 54};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    cout << "enter target: ";
    cin >> target;
    int flag=0;
    while (start <= end)
    {
        if (arr[mid] == target)
        {   flag=1;
            cout << "target is present  " << arr[mid]<<" "<<"at index: "<<" "<<mid;
            return mid;;
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
  if(flag==0){
    cout<<"target is not present";
  }
}