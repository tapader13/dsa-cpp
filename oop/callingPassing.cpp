#include <iostream>
using namespace std;
class father
{
protected:
    int fAge;

public:
    father()
    {
        cout << "saleh ahmed tapader ." << endl;
    }
};
class mother
{
protected:
    int mAge;

public:
    mother()
    {
        cout << "sakera begum tapader ." << endl;
    }
};
class number1 : public father, public mother
{
public:
    number1(int ifAge, int imAge) : father(), mother()
    {
        fAge = ifAge;
        mAge = imAge;
    }
    void pOp2()
    {
        cout << "father age : " << fAge << endl
             << "mother age : " << mAge << endl;
    }
};
int main()
{
    number1 info(54, 37);
    info.pOp2();
}