#include <iostream>
using namespace std;
int binrySrc(int arr[], int size)
{
    if (size <= 0)
    {
        return 0;
    }
    else
    {
        return binrySrc(arr, size - 1) + arr[size - 1];
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    cout << binrySrc(arr, size);
}