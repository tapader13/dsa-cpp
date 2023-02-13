#include <iostream>
using namespace std;
int math(int n)
{
    return 3 * n + 7;
}
int main()
{
    int n;
    cin >> n;
    cout << math(n);
}