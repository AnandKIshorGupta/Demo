// create template to find the sum of two integers and floats.2014 fall 5a
#include <iostream>
using namespace std;
template <class t>
void sum(t x, t y)
{
    cout << "the sum is :" << x + y << endl;
}
int main()
{
    int a, b;
    float x, y;
    cout << "enter two integer values " << endl;
    cin >> a >> b;
    sum(a, b);
    cout << "enter two float values " << endl;
    cin >> x >> y;
    sum(x, y);
    return 0;
}