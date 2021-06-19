// 2019fall1b
// simple interest using r=8% as default argument
#include <iostream>
using namespace std;
class Customer
{
private:
    float p, t, r;

public:
    void setData(float x, float y, float z = 8)
    {
        p = x;
        t = y;
        r = z;
    }
    void showData()
    {
        float interest;
        interest = p * t * r / 100;
        cout << "The interest is " << interest << endl;
    }
};
int main()
{
    Customer c[3];
    float principal, time;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter princpal amount and time of customer " << i + 1 << endl;
        cin >> principal >> time;
        c[i].setData(principal, time);
        c[i].showData();
    }

    return 0;
}
