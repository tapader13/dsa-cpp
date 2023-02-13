#include <iostream>
using namespace std;
int partition(int arr[], int s, int e)
{
    int pivit = arr[s], count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivit)
        {
            count++;
        }
    }
    int pivitIndex = count + s;
    swap(arr[pivitIndex], arr[s]);

    int i = 0, j = 0;
    while (i < pivitIndex && j > pivitIndex)
    {
        while (arr[i] <= pivit)
        {
            i++;
        }
        while (arr[j] > pivit)
        {
            j--;
        }
        if (i < pivitIndex && j > pivitIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivitIndex;
}
void quickSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int p = partition(arr, s, e);
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}
int main()
{
    int arr[10] = {1, 5, 3, 4, 2, 10, 6, 8, 9, 6};
    int size = 10;
    quickSort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}