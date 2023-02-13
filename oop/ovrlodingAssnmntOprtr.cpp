#include <iostream>
using namespace std;
class assingment
{
    int a, b;

public:
    void gIp()
    {
        cout << "Enter input value : " << endl;
        cin >> a;
    }
    void pOp()
    {
        cout << "A is : " << a << endl
        //  << "B is : " << b << endl;
    }
    void operator=(assingment bb)
    {
        a = bb.a;
        b = bb.b;
    }
};
int main()
{
    assingment aa, bb;
    bb.gIp();
    aa = bb;
    // aa.pOp();
    bb.pOp();
    return 0;
}