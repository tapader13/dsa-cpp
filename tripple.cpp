#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {

        for (int j = i + 1; j < 5; j++)
        {

            for (int k = j + 1; k < 5; k++)
            {
                cout << arr[k];
            }
        }
    }
}