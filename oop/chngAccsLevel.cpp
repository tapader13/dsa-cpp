#include <iostream>
using namespace std;
class human
{
protected:
    string bazar;

public:
    void pBazar(string dBazar)
    {
        bazar = dBazar;
    }
};
class human1 : private human
{
public:
    using human ::bazar;
    using human::pBazar;
    void pOp()
    {
        cout << "Bazar name is : " << bazar << endl;
    }
};
int main()
{
    human1 details;
    details.bazar = "Zakigonj";
    details.pOp();
    human1 details1;
    details1.pBazar("ThanaBazar");
    details1.pOp();
    return 0;
}