#include <iostream>
using namespace std;
class name
{
    int number;

public:
    name()
    {
        cout << "constractor called" << endl;
        number = 6;
    }
    void Op()
    {
        cout << number << endl;
    }
    name *operator->()
    {

        cout << "operator called" << endl;
        return this;
    }
};
int main()
{
    name display;
    display.Op();
    display->Op();
    // display(5);

    // display(6);
    // display.Op();
}