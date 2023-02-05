#include <iostream>
using namespace std;

main()
{
    int size, number = 0, product = 0;

    cout << "Enter size of array: ";
    cin >> size;

    int numbers[size];
    for (int x = 0; x < size; x = x + 1)
    {
        cout << "Enter your number: ";
        cin >> numbers[x];
    }

    cout << "Enter the number you want to multiply: ";
    cin >> number;
    for (int x = size - 1; x >= 0; x = x - 1)
    {

        int product = number * numbers[x];
        cout << product << "\t";
    }
}