#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    int n[4] = {1, 2, 3, 4};
    int *ptr = &num;
    // cout << *ptr << endl;
    // cout << ptr << endl;
    cout << *(n + 3);
    // cout << sizeof(ptr) << endl;
}