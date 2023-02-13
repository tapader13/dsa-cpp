#include <iostream>
using namespace std;
class human
{
public:
    human()
    {
        cout << "called human constractor ." << endl;
    }
    ~human()
    {
        cout << "called human distractor ." << endl;
    }
};
class human1 : public human
{
public:
    human1()
    {
        cout << "called human1 constractor ." << endl;
    }
    ~human1()
    {
        cout << "called human1 distractor ." << endl;
    }
};
class human2 : public human1
{
public:
    human2()
    {
        cout << "called human2 constractor ." << endl;
    }
    ~human2()
    {
        cout << "called human2 distractor ." << endl;
    }
};
int main()
{
    human2 Called;
}