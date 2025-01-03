#include <iostream>
#include <vector>
using namespace std;

bool checkTwoSum(int arr[], int size, int target)
{
    pair<int, int> p;
    vector<int, int> v;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
                return 1;
              
        }
    }
    return 0;
}

int main()
{
    int arr[] = {2, 5, 10, 15, 30, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    cin >> target;
    int ans = checkTwoSum(arr, size, target);
    if (ans == 0)
    {
        cout << "pair is not found";
    }
    else
    {
        cout << "pair is present";
    }
}