#include <iostream>
using namespace std;
class name
{
public:
    virtual void p1()
    {
        cout << "Print p1" << endl;
    }
};
class bazar : public name
{
public:
    void p1()
    {
        cout << "Print p2" << endl;
    }
};
class home : public name
{
public:
    void p1()
    {
        cout << "Print p3" << endl;
    }
};
void combined(name &op)
{
    op.p1();
}
int main()
{
    bazar cl1;
    home cl2;
    combined(cl1);
}