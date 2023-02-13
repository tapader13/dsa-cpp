#include <iostream>
using namespace std;
int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}
int main()
{
    // int first=0;
    // int sec=1;
    int n;
    cin >> n;
    fibo(n);
    for (int i = 0; i < n; i++)
    {
        cout << fibo(i) << " ";
    }
}