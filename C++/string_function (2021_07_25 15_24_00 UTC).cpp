using namespace std;
#include <iostream>
#include <cstring>
int main()
{
    char c1[] = " Shivam ";
    char c2[] = " Jaiswal";

    cout << "Concatenation:" << strcat(c1, c2) << "\n";
    cout << "Copy:" << strcpy(c1, c2) << "\n";
    cout << "Length:" << strlen(c1);
    return 0;
}

