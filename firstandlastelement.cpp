#include <iostream>
using namespace std;
int firstOccur(int arr[], int size, int key)
{
    int first = 0;
    int last = size - 1;
    int mid = first + (last - first) / 2;
    int ans = -1;
    while (first <= last)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            last = mid - 1;
        }
        else if (arr[mid] < key)
        {
            first = mid + 1;
        }
        else if (arr[mid] > key)
        {
            last = mid - 1;
        }
        mid = first + (last - first) / 2;
    }
    return ans;
}
int lastOccur(int arr[], int size, int key)
{
    int first = 0;
    int last = size - 1;
    int mid = first + (last - first) / 2;
    int ans = -1;
    while (first <= last)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            first = mid + 1;
        }
        else if (arr[mid] < key)
        {
            first = mid + 1;
        }
        else if (arr[mid] > key)
        {
            last = mid - 1;
        }
        mid = first + (last - first) / 2;
    }
    return ans;
}
int main()
{
    int arr[6] = {1, 2, 3, 3, 3, 4};
    cout << "first element of array" << firstOccur(arr, 5, 3) << endl;
    cout << "last element of array" << lastOccur(arr, 5, 3);
    // cout <<"total number of occurance " lastOccur(arr, 6, 3) - firstOccur(arr, 6, 3) + 1;
}
