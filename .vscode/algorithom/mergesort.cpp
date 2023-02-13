#include <iostream>
using namespace std;
void sorte(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *first = new int(len1);
    int *second = new int(len2);
    int mainIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainIndex++];
    }
    mainIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainIndex++];
    }
    int index1 = 0;
    int index2 = 0;
    mainIndex = s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainIndex++] = first[index1++];
        }
        else
        {
            arr[mainIndex++] = second[index2++];
        }
    }
    while (index1 < len1)
    {

        arr[mainIndex++] = first[index1++];
    }
    while (index2 < len2)
    {

        arr[mainIndex++] = second[index2++];
    }
}
void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    sorte(arr, s, e);
}
int main()
{
    int arr[8] = {0, 1, 3, 8, 9, 2, 4, 7};
    int n = 8;
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}