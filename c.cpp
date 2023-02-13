#include <stdio.h>
int a = 20;
int sum(int a, int b)
{
    printf("%d", a);
    printf("%d", b);
    return a + b;
}
int main()
{
    int a = 10;
    int b = 20;
    int c = 0;
    printf("%d", a);
    c = sum(a, b);
    printf("%d", c);
}
