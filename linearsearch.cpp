#include <iostream>
using namespace std;
bool founding(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[5];
    cout << "Enter key : ";
    int key;
    cin >> key;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int found = founding(arr, 5, key);
    if (found)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}