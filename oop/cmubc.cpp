#include <iostream>
using namespace std;
class num1
{
public:
    void p1()
    {
        cout << "base class" << endl;
    }
};
class num2 : public num1
{
public:
    void p1()
    {
        cout << "derivative class" << endl;
        // num1::p1();
    }
};
void num3(num1 ex)
{
    ex.p1();
}
int main()
{
    num2 rslt;
    rslt.p1();
    num3(rslt);
}