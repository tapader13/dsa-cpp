#include <iostream>
using namespace std;
int binerySearch(int arr[], int size, int key)
{
    int first = 0;
    int last = size - 1;
    int mid = first + (last - first) / 2;
    while (first <= last)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
        mid = first + (last - first) / 2;
    }
    return -1;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int result = binerySearch(arr, 5, 5);
    cout << "number 5 position is " << result;
}