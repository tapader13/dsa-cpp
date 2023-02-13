#include <iostream>
using namespace std;
void marge(int arr[], int s, int e)
{
    int mid = s + (e - s) / 2;
    int l1 = mid - s + 1;
    int l2 = e - mid;
    // create arr
    int *first = new int[l1];
    int *second = new int[l2];
    int mainIndx = s;
    for (int i = 0; i < l1; i++)
    {
        first[i] = arr[mainIndx++];
    }
    mainIndx = mid + 1;
    for (int i = 0; i < l2; i++)
    {
        second[i] = arr[mainIndx++];
    }
    // marge 2
    int indx1 = 0;
    int indx2 = 0;
    mainIndx = s;
    while (indx1 < l1 && indx2 < l2)
    {
        if (first[indx1] < second[indx2])
        {
            arr[mainIndx++] = first[indx1++];
        }
        else
        {
            arr[mainIndx++] = second[indx2++];
        }
    }
    while (indx1 < l1)
    {
        arr[mainIndx++] = first[indx1++];
    }
    while (indx2 < l2)
    {
        arr[mainIndx++] = second[indx2++];
    }
}
void margeSort(int arr[], int s, int e)
{
    int mid = s + (e - s) / 2;
    if (s >= e)
    {
        return;
    }
    // l
    margeSort(arr, s, mid);
    // r
    margeSort(arr, mid + 1, e);
    // marge
    marge(arr, s, e);
}
int main()
{
    int arr[10] = {2, 3, 1, 6, 9};
    int n = 5;
    margeSort(arr, 0, n - 1);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}