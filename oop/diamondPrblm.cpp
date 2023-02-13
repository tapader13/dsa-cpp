#include <iostream>
using namespace std;
class baba
{
public:
    void Baba()
    {
        cout << "baba" << endl;
    }
};
class cele1 : virtual public baba
{
public:
    cele1()
    {
        cout << "cele1" << endl;
    }
};
class cele2 : virtual public baba
{
public:
    cele2()
    {
        cout << "cele2" << endl;
    }
};
class family : public cele1, public cele2
{
public:
    family()
    {
        cout << "family" << endl;
    }
};
int main()
{
    family info;
    info.Baba();
    return 0;
}