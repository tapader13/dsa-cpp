#include <iostream>
using namespace std;
int firstOcc(int arr[], int size, int initial, int key)
{
    if (initial == size)
    {
        return -1;
    }
    if (arr[initial] == key)
    {
        return initial;
    }
    else
    {
        return firstOcc(arr, size, initial + 1, key);
    }
}
int lastOcc(int arr[], int size, int initial, int key)
{
    if (initial == size)
    {
        return -1;
    }
    int restPart = lastOcc(arr, size, initial + 1, key);
    if (restPart != -1)
    {
        return restPart;
    }
    if (arr[initial] == key)
    {
        return initial;
    }
    return -1;
}
int main()
{
    int arr[5] = {1, 2, 3, 3, 4};
    cout << firstOcc(arr, 4, 0, 3) << endl;
    cout << lastOcc(arr, 4, 0, 3);
}