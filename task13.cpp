#include <iostream>
using namespace std;

main()
{
    string str;
    int length;

    cout << "Enter your string: ";
    getline(cin, str);

    length = str.length();
    for (int x = 0; x < length; x++)
    {
        if (str[x] >= 'a' && str[x] < 'z')
        {
            str[x] = str[x] + 1;
        }
        if(str[x] == 'z')
        {
            str[x] = 'a';
        }

        cout << str[x];
    }
}
