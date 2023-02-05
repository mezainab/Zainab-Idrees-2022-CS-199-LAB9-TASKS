#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int numbers[size];

    for (int x = 0; x < size; x++)
    {
        cout << "Enter the numbers in array: ";
        cin >> numbers[x];
    }
    int smallest = numbers[0];
    for (int x = 0; x < size; x++)
    {
        if (numbers[x] < smallest)
        {
            smallest = numbers[x];
        }
    }
    cout << "Smallest number is: " << smallest;
}
