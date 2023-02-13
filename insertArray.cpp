#include <iostream>
using namespace std;
int main()
{
    int arr[50];
    int n, posi, num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> posi >> num;
    for (int i = n - 1; i >= posi - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[posi - 1] = num;
    n++;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}