#include <iostream>
using namespace std;

class Animal
{
    string name;
    int age;

public:
    void saySomthing()
    {
        cout << "Hello From animals..." << endl;
    }
    void eat(string ele)
    {
        cout << "Eats:"<< ele << endl;
    }

    void eat(string ele, string elee)
    {
        cout << "Eats: " << ele << " And " << elee << endl;
    }
};

class Dog : public Animal
{
public:
    void saySomthing()
    {
        cout << "Hello From Dog..."<<endl;
    }
};

int main()
{
    Dog d;
    d.saySomthing();
    d.eat("butter_biscuit");
    d.eat("butter_biscuit","Mava_khari");
}