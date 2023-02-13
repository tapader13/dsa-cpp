#include <iostream>
using namespace std;
int pivot(int arr[], int size)
{
    int first = 0;
    int last = size - 1;
    int mid = first + (last - first) / 2;
    while (first < last)
    {
        if (arr[mid] >= arr[0])
        {
            first = mid + 1;
        }
        else
        {
            last = mid;
        }
        mid = first + (last - first) / 2;
    }
    return first;
}
int main()
{
    int arr[6] = {5, 7, 9, 1, 3, 4};
    cout << "pivot is " << pivot(arr, 6);
}