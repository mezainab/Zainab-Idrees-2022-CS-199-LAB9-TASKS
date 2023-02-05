#include <iostream>
using namespace std;

main()
{
    int size, number = 0;

    cout << "Enter size of array: ";
    cin >> size;

   int numbers[size];
   for(int x = 0; x < size ; x = x + 1)
   {
    cout << "Enter your number: ";
    cin >> numbers[x];
   }
   for(int x = size - 1 ; x >= 0; x = x -1 )
   {
    cout << numbers[x] << "\t" ;
   }
}