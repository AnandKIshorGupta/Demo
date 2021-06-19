// 2014fall4b
// polar to rectangular coordinate conversion
#include <iostream>
#include <math.h>
using namespace std;
class Polar
{
public:
    float r;
    float angle;
    void setData()
    {
        cout << "Enter Polar coordinate  r and angle " << endl;
        cin >> r >> angle;
        cout << "The polar coordinate is "
             << "(" << r << " , " << angle << ")" << endl;
    }
};
class Rectangle
{
public:
    float x;
    float y;
    Rectangle() {}
    Rectangle(Polar p)
    {
        x = p.r * cos(p.angle);
        y = p.r * sin(p.angle);
    }
    void showData()
    {
        cout << "The rectangular coordinate is "
             << "(" << x << " , " << y << ")" << endl;
    }
};
int main()
{
    Polar p1;
    Rectangle r1;
    p1.setData();
    r1 = p1;
    r1.showData();
    return 0;
}