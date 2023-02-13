#include <iostream>
using namespace std;
int power(int p)
{

    if (p == 0)
    {
        return 1;
    }
    else
    {
        return (2 * power(p - 1));
    }
}
int main()
{
    int p;
    cout << "power";
    cin >> p;
    cout << power(p);
}