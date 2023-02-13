#include <iostream>
using namespace std;
class subscript
{
    int arr[3];

public:
    subscript(int n1, int n2, int n3)
    {
        arr[0] = n1;
        arr[1] = n2;
        arr[2] = n3;
    }
    int operator[](int position)
    {
        return arr[position];
    }
};
int main()
{
    subscript s(10, 20, 30);
    cout << s[0] << endl;
    cout << s[1] << endl;
    cout << s[2] << endl;
    return 0;
}