#include <iostream>
using namespace std;
class num1
{
public:
    int number;
    void pNum1()
    {
        cout << "This is number 1 class ." << endl;
    }
};
class num2
{
public:
    int Age;
    void pNum2()
    {
        cout << "This is number 2 class ." << endl;
    }
};
class num3 : public num1, public num2
{
public:
    int height;
    void pNum3()
    {
        cout << "This is combined class ." << endl;
    }
    void pNum4(int inumber, int iAge, int iHeight)
    {
        number = inumber;
        Age = iAge;
        height = iHeight;
    }
    void pOp()
    {
        cout << "Number " << number << endl
             << "Age " << Age << endl
             << "Height " << height << endl;
    }
};
int main()
{
    num3 info;
    info.pNum4(5765, 21, 6);
    info.pOp();
}
