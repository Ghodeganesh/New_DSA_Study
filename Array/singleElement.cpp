#include <iostream>
#include <map>
using namespace std;

int main()
{
    // cout<<"Hello";
    int arr[] = {1, 2, 3, 4, 3, 1, 10, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
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

    map<int, int> m;

    for (int it : arr)
    {
        m[it]++;
    }

    for (int it : arr)
    {
        if (m[it] == 1)
            cout << m[it];
    }
}