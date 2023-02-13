#include <iostream>
using namespace std;
void func()
{
    class human
    {
    public:
        string name1;
        string name2;
        void Op()
        {
            cout << name1 << endl
                 << name2 << endl;
        }
    };
    human result;
    result.name1 = "x";
    result.name2 = "z";
    result.Op();
}
int main()
{
    func();
}