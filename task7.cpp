#include <iostream>
using namespace std;

main()
{
    string str;
    cout << "Enter your string: ";
    getline(cin , str);

int x = 0;
    while(str[x] != '\0')
    {
       
        x = x + 1;
    }
     cout << "Length is: " << x;
}