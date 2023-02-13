#include <iostream>
using namespace std;
void map(int n, string arr[])
{
    if (n == 0)
    {
        return;
    }
    else
    {
        int digit = n % 10;
        n = n / 10;
        map(n, arr);
        cout << arr[digit] << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    map(n, arr);
}