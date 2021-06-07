#include <iostream>
using namespace std;
class Soccer
{
    int jerseyNo;
    int goals;
    int assistNo;

public:
    Soccer()
    {
        cout << "enter jersey no" << endl;
        cin >> jerseyNo;
        cout << "enter no of golas " << endl;
        cin >> goals;
        cout << "enter no of assists " << endl;
        cin >> assistNo;
    }
    // Soccer operator>(Soccer)
    // {
    // }
};
int main()
{
    Soccer s[11];
    // Soccer greatest = s[0];
    // for (int i = 0; i < 11; i++)
    // {
    //     if (s[i]>greatest)
    //     {

    //     }
    // }

    return 0;
}