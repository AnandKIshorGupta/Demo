// Overload * operator using  return type
// 2020fall4b
// Write a program to overload multiplication operator(*) showing the multiplication of two objects
#include <iostream>
using namespace std;
class Operation
{
    int x;

public:
    void setData()
    {
        cout << "enter a value " << endl;
        cin >> x;
    }
    Operation operator*(Operation obj)
    {
        Operation temp;
        temp.x = x * obj.x;
        return temp;
    }
    void showResult()
    {
        cout << "The product is :" << x << endl;
    }
};

int main()
{
    Operation o1, o2, o3;
    o1.setData();
    o2.setData();
    o3 = o1 * o2;
    o3.showResult();
    return 0;
}

// Overload * operator using no return type
// #include <iostream>
// using namespace std;
// class Operation
// {
//     int x;

// public:
//     void setData()
//     {
//         cout << "enter a value " << endl;
//         cin >> x;
//     }

//     void operator*(Operation obj)
//     {
//         int temp;
//         temp = x * obj.x;
//         cout << "Product is :" << temp << endl;
//     }
// };

// int main()
// {
//     Operation o1, o2;
//     o1.setData();
//     o2.setData();
//     o1 *o2;
//     return 0;
// }
