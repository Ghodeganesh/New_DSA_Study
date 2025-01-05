#include <iostream>
using namespace std;
#include <vector>

int main()
{
    // cout << "Hello";
    int arr1[] = {1, 2,  14, 15, 18};
    int arr2[] = {5, 6, 12, 14, 15};
    int arr3[] = {3, 3, 1, 2, 12, 14, 15};
    vector<int> v;
    int sizeOfArrOne = sizeof(arr1) / sizeof(arr1[0]);
    int sizeOfArrTwo = sizeof(arr2) / sizeof(arr2[0]);
    int sizeOfArrThree = sizeof(arr3) / sizeof(arr3[0]);

    for (int i = 0; i < sizeOfArrOne; i++)
    {
        for (int j = 0; j < sizeOfArrTwo; j++)
        {
            for (int k = 0; k < sizeOfArrThree; k++)
            {
                if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
                {
                    v.push_back(arr1[i]);
                }
            }
        }
    }

    for (int i : v)
    {
        cout << "elements: " << i << " ";
    }
}