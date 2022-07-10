//Print ASCII values and their equivalent characters. ASCII value vary from 0 to 255.
#include <iostream>
using namespace std;

int main() {
  
  int i;
  int n=255;
  for(i=0;i<=255;i++)
    {
     cout << i<<" = "<<char(i)<<endl;
    }
    return 0;
}
