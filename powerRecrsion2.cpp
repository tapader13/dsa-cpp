#include <iostream>
using namespace std;
int power(int b, int p)
{
    if (p == 0)
    {
        return 1;
    }
    return b * power(b, p - 1);
}
int main()
{
    int b, p;
    cin >> b >> p;
    cout << power(b, p);
}