#include <iostream>
#include <map>
using namespace std;

int main()
{
    // cout<<"Hello";
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: " << endl;

    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    cout << endl;

    // solution 1
    //  int ans = 0;
    //  for (int i = 0; i < size; i++)
    //  {
    //      ans = ans ^ arr[i];
    //  }
    //  cout << "the unique is : " << ans;

    //  ans=0^1=1
    //   ans=1^2
    // ans=1^2^3
    //  ans=1^2^3^4
    //  ans=1^2^3^4^3 --->3 gets cancelled
    //  ans=1^2^4^2 ---> 2 gets cancelled
    //  ans=1^4^4 ---> 4  gets cancelled
    //  ans=1 ---> 4  gets cancelled

    for (int i = 0; i < size; i++)
    {
        for (int j = size-1; j>=0; j--)
        {
            cout << arr[i] << " "<< arr[j] <<endl;
        }
    }
}