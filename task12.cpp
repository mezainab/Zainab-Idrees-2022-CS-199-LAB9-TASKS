#include <iostream>
using namespace std;

main()
{
    
    string str;
    int length, count = 0;

    cout << "Enter your str: ";
    getline(cin , str);

    length = str.length();

for (int x = 0; x  < length; x ++)
{
if (str[x] == 'a' || str [x]== 'e' || str[x] == 'i' || str[x] == 'o' || str[x] == 'u')
{

 count = count + 1;
}

}
cout << count;
}
