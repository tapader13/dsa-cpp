#include <iostream>
using namespace std;
int src(int *arr, int size, int key)
{
    if (size == 0)
    {
        return 0;
    }
    if (arr[0] == key)
    {
        return 1;
    }
    else
    {
        return src(arr + 1, size - 1, key);
    }
}
int main()
{
    int arr[4] = {1, 2, 5, 4};
    int size = 4;
    int key = 3;
    int ans = src(arr, size, key);
    if (ans)
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }
}