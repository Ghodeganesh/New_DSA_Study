#include <iostream>
using namespace std;

class Customer
{
    int age;
    long long int mobileNumber;
    string name;
    string add;

public:
    Customer(int age, long long int mobileNumber, string name, string add)
    {
        this->add = add;
        this->mobileNumber = mobileNumber;
        this->name = name;
        this->age = age;
    }

    void setName(string name)
    {
        this->name = name;
    }
    void setAge(int a)
    {
        this->age = a;
    }
     void setNumber(long long int number)
    {
        this->mobileNumber = number;
    }
    void details()
    {
        cout << "Name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "mobile: " << mobileNumber << endl;
        cout << "add: " << add << endl;
    }
};

int main()
{
    Customer C1(22, 9156877570, "Ganesh", "ulhasnagar");
    C1.details();

    cout << "after updating: " << endl;
    C1.setAge(29);
    C1.setNumber(9156877570);
    C1.setName("Ganesha");
    C1.details();
}