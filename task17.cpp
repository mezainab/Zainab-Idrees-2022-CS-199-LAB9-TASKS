#include <iostream>
using namespace std;

main()
{
    string str;
    cout <<"Enter your string: ";
    getline(cin , str);

   int length = str.length();
   str[length];

    str[0] = "something"; 
    str[1] = ' ';
   for(int x = 0 ; x < length ; x++)
   {
    str = str[x];
   }
   cout << str;
}