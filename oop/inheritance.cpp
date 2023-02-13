#include <iostream>
using namespace std;
class human
{
protected:
    int age;
    int number;

public:
    void details1(int iage)
    {
        age = iage;
    }
    void details2(int inumber)
    {
        number = inumber;
    }
};
class human1 : public human
{
public:
    int id;
    void details3(int iid)
    {
        id = iid;
    }
    void pAll()
    {
        cout << "Age " << age << endl
             << "Number " << number << endl
             << "Id " << id << endl;
    }
};
int main()
{
    human1 pDetails;
    pDetails.details1(21);
    pDetails.details2(8913);
    pDetails.details3(1);
    pDetails.pAll();
}