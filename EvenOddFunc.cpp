#include <iostream>
using namespace std;
void isEven(int num)
{
    if (num % 2 == 0)
    {
        cout << "even";
    }
    else
    {
        cout << "odd";
    }
}
int main()
{
    int num;
    cin >> num;
    isEven(num);
}