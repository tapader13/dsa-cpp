#include <iostream>
using namespace std;
class sub
{
private:
    int first;
    int second;

public:
    // sub()
    // {
    //     first = 0;
    //     second = 0;
    // }
    sub(int f = 0, int s = 0)
    {
        first = f;
        // second = s;
    }
    void display()
    {
        cout << first << endl;
        //  << second << endl;
    }

    sub operator-(sub s)
    {
        sub temp;
        temp.first = first - s.first;
        // temp.second = second - s.second;
        return temp;
    }
    // sub operator+(sub m);
};
// sub sub::operator+(sub sum)
// {
//     sub temp;
//     temp.first = first + sum.first;
//     temp.second = second + sum.second;
//     return temp;
// }

int main()
{
    sub Op1(3), Op2(2);
    sub Op3 = Op1 - Op2;

    // sub Op4 = Op1 + Op2;
    Op3.display();
    // Op4.display();
}