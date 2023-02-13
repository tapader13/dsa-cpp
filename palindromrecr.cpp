#include <iostream>
using namespace std;
int palindrm(string str, int s, int e)
{
    if (s > e)

        return true;

    if (str[s] != str[e])
    {
        return false;
    }
    else
    {
        s++;
        e--;
        return palindrm(str, s, e);
    }
}
int main()
{
    string str = "abbccbba";
    int ans = palindrm(str, 0, str.length() - 1);
    if (ans)
    {
        cout << "palindrom";
    }
    else
    {
        cout << "not palindrom";
    }
}