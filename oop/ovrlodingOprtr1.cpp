#include <iostream>
using namespace std;
class assingment
{
    int a;

public:
    void gIp()
    {
        cout << "Enter input value : " << endl;
        cin >> a;
    }
    void pOp()
    {
        cout << "A is : " << a << endl;
    }
    void operator+=(assingment bb)
    {
        a = a + bb.a;
    }
};
int main()
{
    assingment aa, bb;
    aa.gIp();
    bb.gIp();

    aa.pOp();
    bb.pOp();
    aa += bb;
    aa.pOp();
    return 0;
}