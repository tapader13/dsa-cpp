#include <iostream>
using namespace std;
int squreInt(int n)
{
    int first = 0;
    int last = n;
    int mid = first + (last - first) / 2;
    int ans = -1;
    while (first <= last)
    {
        int squre = mid * mid;
        if (squre == n)
        {
            return mid;
        }
        else if (squre > n)
        {
            last = mid - 1;
        }
        else
        {
            ans = mid;
            first = mid + 1;
        }
        mid = first + (last - first) / 2;
    }
    return -1;
}
double squreFlot(int n, int afterDecPont, int decSqr)
{
    double fac = 1;
    double natNum = decSqr;
    for (double i = 0; i < afterDecPont; i++)
    {
        fac = fac / 10;
        for (double j = natNum; j * j < n; j = j + fac)
        {
            natNum = j;
        }
    }
    return natNum;
}
int main()
{
    int n;
    cout << "Enter any value for sqrt : " << endl;
    cin >> n;

    // cout << squreInt(n);
    int result = squreInt(n);
    cout << squreFlot(n, 2, result);
}