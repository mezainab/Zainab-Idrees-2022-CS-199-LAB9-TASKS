#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter your size of array: ";
    cin >> size;

    int numbers[size];
    int sum = 0;
    float average = 0;
    for(int x = 0; x < size ; x++)

    {
    cout << "Enter a number:";
    cin >> numbers[x];
    
    sum = sum + numbers[x];

    }
    average = sum / size;
    cout << "sum is: " << sum << endl;
    cout << "Average is: " << average;
    
}