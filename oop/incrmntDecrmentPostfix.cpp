#include <iostream>
using namespace std;
class incDecPo
{
    int number;

public:
    void gIp()
    {
        cout << "Enter input value : " << endl;
        cin >> number;
    }
    void pOp()
    {
        cout << "A is : " << number << endl;
    }
    void operator++(int)
    {
        number += 1;
    }
    // friend void operator--(incDecPo &, int);
};
// void operator--(incDecPo &m, int)
// {
//     m.number -= 1;
// }
int main()
{
    incDecPo info;
    info.gIp();
    info.pOp();

    info++;
    info.pOp();

    // info--;
    // info.pOp();
    return 0;
}