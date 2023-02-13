#include <iostream>
using namespace std;
class human
{

public:
    static int count;
    human()
    {
        count++;
    }
    void humanCount()
    {
        cout << "Total count is : " << count << endl;
    }
    static void humanCount1()
    {
        cout << "Total count 1 is : " << count << endl;
    }
};
int human::count = 0;
int main()
{
    cout << "before call count " << human::count << endl;
    human Count1;
    human Count2;
    human Count3;
    human Count4;
    human Count5;
    Count1.humanCount();
    human::humanCount1();
}