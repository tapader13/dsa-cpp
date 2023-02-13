#include <iostream>
using namespace std;
class human
{
private:
    string name;

public:
    void pOP(string name)
    {
        this->name = name;
    }
    void disply()
    {
        cout << this->name;
    }
};
int main()
{
    human info;
    info.pOP("minhaj");
    info.disply();
}
