#include <iostream>
using namespace std;
int search(int arr[], int size, int key)
{
    for (int i = 0; i <= size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return false;
}
int main()
{
    // int arr[] = {3, 5, 9, 10, 15, 16};
    // int size = sizeof(arr);
    int arr[] = {1, 5, 9, 10, 15, 16};
    int size = 5;
    int key = 9;
    int ans = search(arr, size, key);
    if (ans)
    {
        cout << "index is " << ans;
    }
    else
    {
        cout << "key not found";
    }
}