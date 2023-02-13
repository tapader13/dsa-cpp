#include <iostream>
using namespace std;
int binrySrc(int *arr, int start, int end, int key)
{
    if (start > end)
    {
        return false;
    }
    int mid = start + (end - start) / 2;
    if (arr[mid] == key)
    {
        return true;
    }
    if (arr[mid] < key)
    {
        return binrySrc(arr, mid + 1, end, key);
    }
    else
    {
        return binrySrc(arr, start, mid - 1, key);
    }
}
int main()
{
    int arr[4] = {1, 2, 3, 4};
    int size = 5;
    int key = 7;
    int start = 0;
    int end = size - 1;
    cout << binrySrc(arr, start, end, key);
}