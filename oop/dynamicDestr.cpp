#include <iostream>
using namespace std;
class human
{
private:
    int *roll;
    string *bazar;

public:
    human(int dRoll, string dBazar)
    {
        roll = new int;
        bazar = new string;
        *roll = dRoll;
        *bazar = dBazar;
    }
    void pDetails()
    {
        cout << "my roll is " << *roll << endl
             << "bazar name is " << *bazar << endl;
    }
    ~human()
    {
        delete roll;
        delete bazar;
        cout << "delete done successfully." << endl;
    }
};
int main()
{
    human *details = new human(13., "Zakigonj.");
    details->pDetails();
    delete details;
}