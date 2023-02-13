#include <iostream>
using namespace std;
class human
{
private:
    int age;
    string name;
    string num = "mkh";

public:
    human()
    {
        age = 20;

        cout << "minhaj tapader" << endl;
    };

    void pDetails()
    {
        cout << age;
        cout << num;
    }
};

int main()
{
    human details;
    details.pDetails();
}