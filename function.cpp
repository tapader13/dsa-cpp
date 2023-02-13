#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter number a : " << endl;
    cin >> a;
    cout << "Enter number b : " << endl;
    cin >> b;
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    cout << ans;
}