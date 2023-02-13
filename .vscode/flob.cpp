#include <iostream>
using namespace std;
int firstOcc(int arr[], int s, int e, int key)
{
    int result = -1;
    if (s > e)
    {
        return false;
    }

    int mid = s + (e - s) / 2;
    if (arr[mid] == key)
    {
        result = mid;
        firstOcc(arr, s, mid - 1, key);
        return result;
    }
    if (arr[mid] < key)
    {
        s = mid + 1;
        return firstOcc(arr, s, e, key);
    }
    else
    {
        e = mid - 1;
        return firstOcc(arr, s, e, key);
    }
    return result;
}
int lastOcc(int arr[], int s, int e, int key)
{
    int result = -1;
    if (s > e)
    {
        return false;
    }
    int mid = s + (e - s) / 2;
    if (arr[mid] == key)
    {
        result = mid;
        lastOcc(arr, mid + 1, e, key);
        return result;
    }
    if (arr[mid] < key)
    {
        s = mid + 1;
        return lastOcc(arr, s, e, key);
    }
    else
    {
        e = mid - 1;
        return lastOcc(arr, s, e, key);
    }
    return result;
}
int main()
{
    int arr[10] = {1, 2, 3, 3, 4, 5};

    // cout << firstOcc(arr, 0, 4, 3) << endl;
    cout << lastOcc(arr, 0, 5, 3);
}