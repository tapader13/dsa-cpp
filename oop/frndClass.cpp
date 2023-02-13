#include <iostream>
using namespace std;
class human
{
private:
    int roll;
    string bazar;

public:
    human(int iRoll, string iBazar)
    {
        roll = iRoll;
        bazar = iBazar;
    }
    friend void pDetails(human man);
};
void pDetails(human man)
{
    cout << man.roll << endl;
    cout << man.bazar << endl;
}
int main()
{
    human details(13, "Zakigonj");
    pDetails(details);
}