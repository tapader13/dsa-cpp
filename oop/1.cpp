#include <iostream>
using namespace std;
class human
{

public:
    string name, fName, mName;
    void pName()
    {
        cout << "my name is"
             << " " << name << endl;
        cout << "my fName is"
             << " " << fName << endl;
        cout << "my mName is"
             << " " << mName << endl;
    }
    void addNum()
    {
        int n;
        cin >> n;
        cout << (n + n);
    }
};

int main()
{
    human details1;
    details1.name = "minhaj tapader";
    details1.fName = "saleh ahmed";
    details1.mName = "sakera begum";
    details1.pName();
    human details2;
    details2.name = "miftah tapader";
    details2.fName = "saleh ahmed";
    details2.mName = "sakera begum";
    details2.pName();
    human number;
    number.addNum();
    // human *details3 = new human();
    // details3->name = "min";
    // details3->pName();
    return 0;
}