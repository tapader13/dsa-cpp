#include <iostream>
using namespace std;
int main()
{
    string str = "minhaj tapader";
    int i = 0;
    int e = str.length() - 1;
    while (i < e)
    {
        swap(str[i], str[e]);
        i++;
        e--;
    }
    cout << str;
}