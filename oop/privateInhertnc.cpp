#include <iostream>
using namespace std;
class human
{
protected:
    string name;

public:
    void pName(string iName)
    {
        name = iName;
    }
};

class human1 : private human
{
public:
    void pResult()
    {
        cout << "Name :" << name;
    }
    void pName2(string iName)
    {
        pName(iName);
    }
};
class human2 : public human1
{
public:
    void pName1(string iName)
    {
        pName2(iName);
    }
};
int main()
{
    human2 details;
    details.pName1("MD: MINHAJ UDDIN TAPADER .");
    details.pResult();
}