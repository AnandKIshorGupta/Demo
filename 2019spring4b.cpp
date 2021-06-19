// 2019 spring 4b
// Create a class called Person with suitable data members to represent their name and age. Use member functions to initialize and display these information. Derive Student and Employee from the Person class with their unique features. Initialize objects of these classes using constructor and display the information.
#include <iostream>
using namespace std;
class Person
{
public:
    string name;
    int age;
    void setData()
    {
        cout << "Enter name and age " << endl;
        cin >> name >> age;
    }
    void showData()
    {
        cout << "Name: " << name << endl
             << "Age: " << age << endl;
    }
};
class Student : public Person
{
public:
    string faculty;
    int roll;
    Student()
    {
        cout << "Enter student information" << endl;
        setData();
        cout << "Enter faculty and roll " << endl;
        cin >> faculty >> roll;
    }
    void showData()
    {
        cout << "Student information " << endl;
        Person::showData();
        cout << "Faculty: " << faculty << endl
             << "Roll: " << roll << endl;
    }
};
class Employee : public Person
{
public:
    float salary;
    int empId;
    Employee()
    {
        cout << "Enter Employee information" << endl;
        setData();
        cout << "Enter salary and employee id  " << endl;
        cin >> salary >> empId;
    }
    void showData()
    {
        cout << "Employee information " << endl;
        Person::showData();
        cout << "Salary: " << salary << endl
             << "Employee Id: " << empId << endl;
    }
};

int main()
{
    Student s1;
    Employee e1;
    s1.showData();
    e1.showData();
    return 0;
}
