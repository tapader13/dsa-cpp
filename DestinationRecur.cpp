#include <iostream>
using namespace std;
void destination(int src, int dest)
{
    cout << "src" << src << "dest" << dest << endl;
    if (src == dest)
    {
        cout << "end" << endl;
        return;
    }
    else
    {
        src++;
        destination(src, dest);
    }
}
int main()
{
    int dest = 15;
    int src = 1;
    destination(src, dest);
}