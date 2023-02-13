#include <iostream>
using namespace std;
class human
{

public:
    string name;
    void pName();
};

void human::pName()
{
    cout << human::name;
}

int main()
{
    human details;
    details.name = "minhaj";
    details.pName();
    return 0;
}