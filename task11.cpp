#include <iostream>
using namespace std;

main ()
{
    bool result = false;
    string name;
    char letter;
    cout << "Enter your name: ";
    getline(cin , name);
    cout << "Enter your character: ";
    cin >> letter;

    int length = name.length();

for(int x = 0 ; x < length ; x++)
{
    if(name[x] == letter)
    {
      result = true;
    }
    
}
if (result == true)
{
    cout << "Present";
}
if (result == false)
{
    cout << "Not Present";
}
}