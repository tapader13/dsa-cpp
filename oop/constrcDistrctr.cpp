#include <iostream>
using namespace std;
class human
{

public:
    human()
    {
        cout << "constructor called." << endl;
    }
    ~human()
    {
        cout << "distructor called." << endl;
    }
};
int main()
{
    human *details;
    details = new human();
    delete details;
}