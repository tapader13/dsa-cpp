#include <iostream>
using namespace std;
class num1
{
public:
    virtual void pOp1() = 0;
};

class num2 : public num1
{
public:
    void pop1()
    {
        cout << "print 1" << endl;
    }
};

int main()
{
}