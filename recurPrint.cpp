#include <iostream>
using namespace std;
void fact(int n)
{
    if (n == 0)
    {
    }
    else
    {
        fact(n - 1);
        cout << n;
    }
}
int main()
{
    int n;
    cin >> n;
    fact(n);
}