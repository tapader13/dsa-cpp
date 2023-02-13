#include <iostream>
using namespace std;
int binrySrc(int *arr, int size)
{
    if (size == 0)
    {
        return 0;
    }
    else if (size == 1)
    {
        return arr[0];
    }
    else
    {
        int baki = binrySrc(arr + 1, size - 1);
        return baki + arr[0];
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    cout << binrySrc(arr, size);
}
