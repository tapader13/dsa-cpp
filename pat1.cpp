#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 2 * n; i++)
    {
        int totalcol = i > n ? 2 * n - i : i;
        for (int j = 0; j < totalcol; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}