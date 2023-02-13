#include <iostream>
using namespace std;
int Sort(int arr[], int size)
{
    if (size == 1)
    {
        return true;
    }
    int rest = Sort(arr + 1, size - 1);
    return (arr[0] < arr[1] && rest);
}
int main()
{
    int arr[5] = {1, 4, 3, 2, 5};
    int ans = Sort(arr, 5);
    if (ans)
    {
        cout << "sorted";
    }
    else
    {
        cout << "not sorted";
    }
}