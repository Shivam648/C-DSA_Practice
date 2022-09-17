#include <iostream>
using namespace std;

struct employee
{
    int ID;
    string Profile;
    float Prize;
};

int main()
{
    struct employee Shivam;
    Shivam.ID = 34;
    Shivam.Profile = "Student";
    Shivam.Prize = 20000;
    cout << Shivam.ID << endl;
    cout << Shivam.Profile << endl;
    cout << Shivam.Prize << endl;
    return 0;
}