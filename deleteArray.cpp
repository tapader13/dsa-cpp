#include <iostream>
using namespace std;
int main()
{
    int arr[50];
    int n, posi;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> posi;
    for (int i = posi - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}