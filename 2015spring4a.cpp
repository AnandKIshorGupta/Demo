// 2015 spring 4a
// The class Record derives information from both Account and Admin classes and in turn derive information from the class Person.Define all the four classes with at least one parameterized constructor and 'void display() method in each class. In main () function, create the object of the class ' Record' and initialize all the data members and display them.
#include <iostream>
using namespace std;
class Person
{

public:
    string name;
    int code;
    // constructor
    Person(string Name, int Code)
    {
        name = Name;
        code = Code;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "code: " << code << endl;
    }
};
class Account : virtual public Person
{
public:
    double salary;
    // constructor
    Account(string Name, int Code, double Salary) : Person(Name, Code)
    {
        salary = Salary;
    }
    void display()
    {
        Person::display();
        cout << "salary: " << salary << endl;
    }
};
class Admin : virtual public Person
{
public:
    int experienceYear;
    // constructor
    Admin(string Name, int Code, int exp) : Person(Name, Code)
    {
        experienceYear = exp;
    }
    void display()
    {
        Person::display();
        cout << "No of years of experience: " << experienceYear << endl;
    }
};
class Record : public Account, public Admin
{
public:
    int recordNo;
    // constructor
    Record(string Name, int Code, double Salary, int exp, int r) : Account(Name, Code, Salary), Admin(Name, Code, exp), Person(Name, Code)
    {
        recordNo = r;
    }
    void display()
    {
        Account::display();
        Admin::display();
        cout << "Record Number : " << recordNo << endl;
    }
};
int main()
{
    string name;
    int code;
    double salary;
    int exp;
    int recordNo;
    cout << "Enter Person Name :" << endl
         << "enter code" << endl
         << "Enter salary " << endl
         << "enter experiece year" << endl
         << "enter record no" << endl
         << endl;
    cin >> name >> code >> salary >> exp >> recordNo;

    Record r1(name, code, salary, exp, recordNo);
    r1.display();

    return 0;
}