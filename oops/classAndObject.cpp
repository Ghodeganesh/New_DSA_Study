#include <iostream>
using namespace std;

class Student
{
public:
    int age;
    string name;
    int courses;

    Student(string n, int a, int c)
    {
        age = a;
        name = n;
        courses = c;
    }
    void display()
    {
        cout << name << " " << age << " " << courses;
    }
};

int main()
{

    Student s("Ganesh", 22, 5);

    s.display();
}