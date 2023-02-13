#include <iostream>
using namespace std;
class name
{
    int number;

public:
    name(int n)
    {
        cout << "constractor called" << endl;
        number = n;
    }
    void Op()
    {
        cout << number << endl;
        }
    name operator()(int res)
    {
        number = res;
        cout << "operator called" << endl;
        return *this;
    }
};
int main()
{
    name display(4);
    display.Op();
    display(5);
    display.Op();
    display(6);
    display.Op();
}