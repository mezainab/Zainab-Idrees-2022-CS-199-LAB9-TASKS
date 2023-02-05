#include <iostream>
using namespace std;
main()
{
    int numbers1[2], size2 = 0, length = 0, finalArray = 0, finalSize = 0;

    cout << "Enter first number from first array: ";
    cin >> numbers1[0];
    cout << "Enter second number from first array: ";
    cin >> numbers1[1];

    cout << "Enter size of second array: ";
    cin >> size2;

    finalSize = 2 + size2;

    int numbers2[finalSize];

    for (int x = 0; x < size2; x++)
    {
    cout << "Enter your number from second array: ";
    cin >> numbers2[finalSize];

    finalArray = numbers1[2] + numbers2[finalSize];
    }

    for(int z = 0 ; z < finalSize < z++;)
    {
    numbers2[0] = numbers1[0];
    numbers2[finalSize] = numbers2[finalSize];
    numbers2[z + 1] = numbers1[1];  

    cout << finalArray[z];
    }  
}

