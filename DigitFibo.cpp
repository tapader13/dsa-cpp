#include <iostream>
using namespace std;
void fibo(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << (n % 10) << endl;
    fibo(n / 10);
}
int main()
{
    int n;
    cin >> n;

    fibo(n);
}