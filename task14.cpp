#include <iostream>
using namespace std;

main()
{

    int size;

    cout << "Enter size of array: ";
    cin >> size;

    float resistance[size];
    float totalResistance = 0;

    for(int x = 0; x < size ; x++)
    {
        cout << "Enter the value of resistance: ";
        cin >> resistance[x];

        totalResistance = totalResistance + resistance[x];
    }
        
       cout << "Total resistance: " << totalResistance << " " << "ohms";

}