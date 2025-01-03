#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(12);
    v.push_back(13);
    v.push_back(14);
    v.push_back(15);

    cout << "Size of V : " << v.size() << endl;

    // for (int i : v)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // v.pop_back();
    // for (int i : v)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    // cout << "Size of V : " << v.size() << endl;

    // v.pop_back();
    // for (int i : v)
    // {
    //     cout << i << " ";
    // }
    // cout << "Size of V : " << v.size() << endl;

    cout << "Front is :" << v.front() << endl;
    cout << "Back is : " << v.back() << endl;
    cout << "Capacity is : " << v.capacity() << endl;


    v.push_back(13);
    v.push_back(14);
    v.push_back(15);
    v.push_back(100);
    cout << "Capacity is : " << v.capacity();
}