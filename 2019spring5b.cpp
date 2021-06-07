// 2019 spring 5b
// Write a program to add two complex numbers.your program should have three objects .Each object contains two attributes (that is real and imaginary part). Now add each attribute and save them into third object separately use the concept of '+' operator overloading.
#include <iostream>
using namespace std;
class Complex
{
    int real;
    int imaginary;

public:
    void setData()
    {
        cout << "Enter real and imaginary part " << endl;
        cin >> real >> imaginary;
        cout << "The complex number is " << real << "+" << imaginary << "i" << endl;
    }
    Complex operator+(Complex obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.imaginary = imaginary + obj.imaginary;
        return temp;
    }
    void showData()
    {
        cout << "The sum is " << real << "+" << imaginary << "i" << endl;
    }
};
int main()
{
    Complex c1, c2, c3;
    c1.setData();
    c2.setData();
    c3 = c1 + c2;
    c3.showData();
    return 0;
}