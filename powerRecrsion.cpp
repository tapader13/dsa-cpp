#include <iostream>
using namespace std;
int power(int b, int p)
{
    if (p == 0)
    {
        return 1;
    }
    if (p == 1)
    {
        return b;
    }
    int ans = power(b, p / 2);
    if (p % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return b * ans * ans;
    }
}
int main()
{
    cout << "base b power p" << endl;
    int b, p;
    cin >> b >> p;
    cout << power(b, p);
}