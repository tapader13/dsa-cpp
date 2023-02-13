#include <iostream>
using namespace std;
void twoDmat(int arr[3][3], int flag[3][3])
{
    int center = arr[1][1], result = 0, temp[3][3], res[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 1 && j == 1)
            {
                temp[i][j] = 0;
            }
            else
            {
                if (arr[i][j] >= center)
                {
                    temp[i][j] = 1;
                }
                else
                {
                    temp[i][j] = 0;
                }
            }
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << temp[i][j] << " ";
                }
                cout << endl;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            result += temp[i][j] * flag[i][j];
        }
    }

    cout << result;
}
int main()
{
    int arr[3][3] = {{17, 45, 65}, {62, 62, 73}, {90, 20, 41}};
    int flag[3][3] = {{1, 2, 4}, {128, 0, 8}, {64, 32, 16}};
    twoDmat(arr, flag);
}