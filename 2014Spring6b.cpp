// 2014 spring 6 b
/*Create a class Person with data members Name, Age and Address.Create another class Teacher with data members Qualification and Department.Also create another class Student with data member Program and Semester.Both classes are inherited from the class Person.Every class has at least one constructor which uses base class constructor : Create member function Show Data() in each to display the information of the class member.*/
#include <iostream>
using namespace std;
class Person
{
public:
    string name;
    int age;
    string Address;

public:
    void showData()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << Address << endl;
    }
    // constructor
    Person()
    {
        cout << "Enter name " << endl;
        cin >> name;
        cout << "Enter age " << endl;
        cin >> age;
        cout << "Enter address" << endl;
        cin >> Address;
    }
};

class Teacher : public Person
{
    string qualification;
    string department;

public:
    void showData()
    {
        Person::showData();
        cout << "Qualification: " << qualification << endl;
        cout << "Department: " << department << endl;
    }
    Teacher()
    {
        cout << "Enter Qualification " << endl;
        cin >> qualification;
        cout << "Enter department " << endl;
        cin >> department;
    }
};

class Student : public Person
{
    string program;
    string semester;

public:
    void showData()
    {
        Person::showData();
        cout << "Program: " << program << endl;
        cout << "Semester: " << semester << endl;
    }
    Student()
    {
        cout << "Enter program " << endl;
        cin >> program;
        cout << "Enter semester " << endl;
        cin >> semester;
    }
};

int main()
{
    Teacher t1; //Both derived class and base class constructor is called
    cout << endl
         << "Teacher information " << endl;
    t1.showData();

    Student s1; //Both derived class and base class constructor is called
    cout << endl
         << "Student information " << endl;
    s1.showData();
    return 0;
}