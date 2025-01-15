#include <iostream>
using namespace std;

class Student
{
    int age;
    string name;
    int courses;
    int roll_number;

    // Student(string n, int a, int c)
    // {
    //     age = a;
    //     name = n;
    //     courses = c;
    // }
public:
    void setDetails(string name, int age, int roll_number, int courses)
    {
        this->age = age;
        this->name = name;
        this->roll_number = roll_number;
        this->courses = courses;
    }
    void display()
    {
        cout <<"Name: "<< name <<endl;
        cout<<"ROll-No: "<< roll_number<<endl;
        cout<<"Age: "<< age <<endl;
        cout<<"Courses:"<<courses<<endl<<endl;
    }
};

int main()
{

    Student S1;
    S1.setDetails("Ganesh", 22, 23, 6);
    S1.display();
 
    Student S2;
    S2.setDetails("Amol",24,24,1);
    S2.display();
}