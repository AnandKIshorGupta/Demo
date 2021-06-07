// 2015 fall 3a
/*
Create classes called class 1 and class2 with each of having one private member. Add member function to set a value (say setvalue) on each class. Add one more function max () that is friendly to both classes. max () function should compare two private member of two classes and show maximum among them. Create one-one object of each class then set a value on them. Display the maximum number among them
*/
#include <iostream>
using namespace std;
class class2;
class class1
{
    int a;

public:
    void setValue()
    {
        cout << "enter value " << endl;
        cin >> a;
    }
    friend void max(class1, class2); //friend function
};
class class2
{
    int b;

public:
    void setValue()
    {
        cout << "enter value " << endl;
        cin >> b;
    }
    friend void max(class1, class2);
};
void max(class1 x, class2 y)
{
    if (x.a > y.b)
    {
        cout << "Max number is " << x.a << endl;
    }
    else
    {
        if (x.a < y.b)
        {

            cout << "Max number is " << y.b << endl;
        }
        else
        {
            cout << "Both are equal " << endl;
        }
    }
}
int main()
{
    class1 c1;
    class2 c2;
    c1.setValue();
    c2.setValue();
    max(c1, c2);
    return 0;
}