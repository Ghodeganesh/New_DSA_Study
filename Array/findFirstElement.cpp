#include <iostream>
using namespace std;

int main()
{
    // cout<<"Hello";
    int arr[] = {1, 2, 4,  3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int flag=0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {    flag=1;
                cout<<"the first repeating  element is : "<<arr[i];
                return i;
            }
        }
    }
    if(flag==0){
        cout<<"Array dont have any repeating element";
    }
}