#include <iostream>
using namespace std;

main()
{
    int size, number = 0;
    bool isFound =  false;

    cout << "Enter size of array: ";
    cin >> size;

    int numbers[size];
    for (int x = 0; x < size; x = x + 1)
    {
        cout << "Enter your number: ";
        cin >> numbers[x];
    }
    cout << "Enter the number: ";
    cin >> number;
    for(int x = 0 ; x < size; x++)
    {
        if (numbers[x] == number)
        {
            isFound = true;
            break;
        }
        
    }
    if (isFound == true)
    {
        cout << "Number found";
    }
    else 
    {
        cout << "Not Found";
    }
}