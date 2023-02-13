#include <iostream>
using namespace std;
int main()
{
    float *a = new float;
    *a = 3.456;
    cout << *a;
    delete a;
    return 0;
}
