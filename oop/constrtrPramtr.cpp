#include <iostream>
using namespace std;
class human
{
private:
    int roll;
    string home;

public:
    human(int dRoll)
    {
        cout << "constructor when roll is parameter" << endl;
        roll = dRoll;
        home = "sylhet";
    };
    human(string dHome)
    {
        cout << "constructor when home is parameter" << endl;
        roll = 13;
        home = dHome;
    };
    void pDetails()
    {
        cout << roll << endl
             << home << endl;
    }
};
int main()
{
    human details1(60);
    details1.pDetails();
    human details2("sylhet");
    details2.pDetails();
}