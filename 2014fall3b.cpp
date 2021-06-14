// 2014 fall 3 b
//write a program concatenate two strings(name and address of person) using the concept of containership
#include <iostream>
using namespace std;
class Name
{
public:
    string name;
};
class Address
{
public:
    string address;
};
class Person //container class
{
public:
    Name n1;
    Address a1;
    void setData()
    {
        cout << "enter name of person " << endl;
        cin >> n1.name;
        cout << "enter address of person " << endl;
        cin >> a1.address;
    }
    void merge()
    {
        string together = n1.name + a1.address;
        cout << "the joined string is :" << together << endl;
    }
};
int main()
{
    Person p;
    p.setData();
    p.merge();
    return 0;
}