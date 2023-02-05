#include <iostream>
using namespace std;

main()
{
    string name;
    cout << "Enter your name: ";
    getline(cin , name);

int x = 0;
    while(name[x] != '\0')
    {
        cout << " Character " << name[x] << " " << " at index" << x <<endl;
        x = x + 1;
    }
}