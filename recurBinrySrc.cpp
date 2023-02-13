#include <iostream>
using namespace std;
bool binrySrc(int *arr, int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    else if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool bakiOngso = binrySrc(arr + 1, size - 1);
        return bakiOngso;
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    bool ans = binrySrc(arr, size);
    if (ans)
    {
        cout << "Sorted";
    }
    else
    {
        cout << "Not Sorted";
    }
}