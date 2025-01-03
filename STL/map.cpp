#include <iostream>
#include <map>
using namespace std;

int main()
{
    // cout << "map";
    map<int, string> m;

    m[2] = "ganesh";
    m[1] = "Hello";

    m.insert({3,"Tejas"});

    // for(int it:m){
    //     pair<int,string>p;
    //     p.
    // }
    cout<<m[2]<<endl;
    cout<<m[3]<<endl;
    cout<<"size: "<<m.size()<<endl;

   cout << m.count(2); 
   cout<<endl;

    if(m.find(2) !=m.end()){
        cout<<"Present";
    }else{
        cout<<"not present";
    }
}