// 2015spring2b
// Write a program to add two complex numbers using the concept of constructor
#include <iostream>
using namespace std;
class Complex
{
public:
    int real;
    int imag;
    Complex()
    {
        cout << "enter real and imaginary part" << endl;
        cin >> real >> imag;
    }
    Complex(Complex x, Complex y)
    {
        int realsum = x.real + y.real;
        int imagsum = x.imag + y.imag;
        cout << "The sum is " << realsum << "+j" << imagsum << endl;
    }
};
int main()
{
    Complex c1, c2, sum(c1, c2);
    return 0;
}
