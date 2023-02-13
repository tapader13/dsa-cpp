#include <iostream>
using namespace std;
class school
{
public:
    string bibag;
    class student
    {
    public:
        string name1;
        string name2;
        string name3;
        string name4;
    };
    student pName;
    void displayOp()
    {
        cout << bibag << endl
             << pName.name1 << endl
             << pName.name2 << endl
             << pName.name3 << endl
             << pName.name4 << endl;
    }
};
int main()
{
    school result;
    result.bibag = "sylhet";
    result.pName.name1 = "minhaj";
    result.pName.name2 = "miftah";
    result.pName.name3 = "mijan";
    result.pName.name4 = "marzan";
    result.displayOp();
}