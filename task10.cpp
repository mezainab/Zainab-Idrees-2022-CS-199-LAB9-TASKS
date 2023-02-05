#include <iostream>
using namespace std;

main()
{
    string name;
    char letter;
    cout << "Enter your name: ";
    getline(cin , name);
    cout << "Enter the letter to be compared: ";
    cin >> letter;

int length = name.length();

if (name[length - 1] == letter)
{
    cout << "same";
}
else 
{
    cout << "not same!";
}

}