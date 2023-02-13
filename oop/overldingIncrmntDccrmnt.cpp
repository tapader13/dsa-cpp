#include <iostream>
using namespace std;
class incDec
{
private:
    int number;

public:
    void gIp()
    {
        cout << "Enter input value : " << endl;
        cin >> number;
    }
    void pOp()
    {
        cout << "A is : " << number << endl;
    }
    void operator++()
    {
        ++number;
    }
    void operator++(int)
    {
        number++;
    }
    friend void operator--(incDec &m);
};
void operator--(incDec &m)
{
    m.number -= 1;
}
int main()
{
    incDec info;
    info.gIp();
    // info.pOp();

    ++info;
    info++;
    info.pOp();

    --info;
    info.pOp();
    return 0;
}