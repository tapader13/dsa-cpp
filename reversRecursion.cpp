#include <iostream>
using namespace std;
void reverse(string &str, int s, int e)
{
    if (s > e)
    {
        return;
    }
    swap(str[s], str[e]);
    s++;
    e--;
    reverse(str, s, e);
}
int main()
{
    string str = "minhaj";
    reverse(str, 0, str.length() - 1);
    cout << str;
}