#include <iostream>
using namespace std;
class human
{
protected:
    string name;

public:
    void pName(string iname)
    {
        name = iname;
    }
};
class human1 : protected human
{
public:
    void pName1()
    {
        cout << name << endl;
    }
    void pDetails(string iname)
    {
        pName(iname);
    }
};
class human2 : protected human1
{
public:
    void pName2()
    {
        cout << name << endl;
    }
    void pDetails1(string iname)
    {
        pName(iname);
    }
};
int main()
{
    human2 details;
    details.pDetails1("minhaj");
    details.pName2();
}