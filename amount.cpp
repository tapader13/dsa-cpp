#include <iostream>
using namespace std;
int main()
{
    int amount;
    cout << "Enter any amount: ";
    cin >> amount;
    int note;
    cout << "Enter any note number : ";
    cin >> note;
    switch (note)
    {
    case 100:
        cout << "100 tk note" << amount << endl;

        break;

    default:
        cout << "please enter valid amount" << endl;
        break;
    }
}