#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    // a==b hole a otoba b return korlei hobe
    return a;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
}