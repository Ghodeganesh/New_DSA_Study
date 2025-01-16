#include <iostream>
using namespace std;

class Animals
{
public:
    string name;
    int age;
    int weigth;
    int heigth;

    
};

class Dog : public Animals
{
public:
    void bark()
    {
        cout << "Dog Barking";
    }

    Dog(string n, int w, int h, int a)
    {
        cout << "Name: " << n << endl;
        cout << "Age: " << a << endl;
        cout << "weigth: " << w << endl;
        cout << "heigth: " << h << endl;
    }

    void Details()
    {
        cout << "Name: " <<this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << "weigth: " << this->weigth << endl;
        cout << "heigth: " << this->heigth << endl;
    }
   
};

int main()
{

    Dog d("Sherferd", 30, 5, 12);

    d.Details();

    
}