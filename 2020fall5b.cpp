// 2020fall 5b
// create a template function swap() and use it to swap two integers ,two floating point data and two characters
#include <iostream>
using namespace std;
template <class T>
void swap(T *x, T *y)
{
    T temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{

    int a, b;
    cout << "Enter two integers " << endl;
    cin >> a >> b;
    cout << "Before swap numbers are :" << a << "," << b << endl;
    swap(&a, &b);
    cout << "After swap numbers are :" << a << "," << b << endl;
    float c, d;
    cout << "Enter two float values " << endl;
    cin >> c >> d;
    cout << "Before swap numbers are :" << c << "," << d << endl;
    swap(&c, &d);
    cout << "After swap numbers are :" << c << "," << d << endl;
    char c1, c2;
    cout << "Enter two characters :" << endl;
    cin >> c1 >> c2;
    cout << "Before swap characters are :" << c1 << "," << c2 << endl;
    swap(&c1, &c2);
    cout << "After swap characters are :" << c1 << "," << c2 << endl;

    return 0;
}