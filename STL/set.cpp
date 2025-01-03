#include <iostream>
#include <set>
using namespace std;
int main()
{
    // cout<<"Hello Set";
    set<int> st;

    st.insert(10);
    st.insert(100);
    st.insert(102);
    st.insert(3);

    // if (st.find(1000) != st.end())
    // {
    //     cout << "Element is present";
    // }
    // else
    // {
    //     cout << "Element is not present";
    // }
    cout << "size:"<<" "<<st.size() << endl;
    if (st.empty() == true)
    {
        cout << "Empty";
    }
    else
    {
        cout << "Not Empty";
    }
    cout << endl;
    for (int it : st)
    {
        cout << it << " " << endl;
    }
    // st.erase(st.begin(), st.end());
    cout << endl;
    if (st.empty() == true)
    {
        cout << "Empty";
    }
    else
    {
        cout << "Not Empty";
    }
    cout << endl;

    for (int it : st)
    {
        cout << it << " " << endl;
    }
    st.clear();
     if (st.empty() == true)
    {
        cout << "Empty";
    }
    else
    {
        cout << "Not Empty";
    }
    

}