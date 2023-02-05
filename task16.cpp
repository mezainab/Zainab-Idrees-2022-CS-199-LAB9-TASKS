#include <iostream>
using namespace std;

main()
{

    float amount, sum = 0;
    float numbers[4];
    bool result;

    cout << "Enter the amount due: ";
    cin >> amount;

    for (int x = 0; x < 4; x++)
    {
        cout << "Enter numbers in array: ";
        cin >> numbers[x];
    }
        numbers[0] = numbers[0] * 0.25;
        numbers[1] = numbers[1] * 0.10;
        numbers[2] = numbers[2] * 0.05;
        numbers[3] = numbers[3] * 0.01;  

    sum = sum + numbers[0] + numbers[1] + numbers[2] + numbers[3];

    if (sum >= amount)
    {
        result = true;
    }
    if (sum < amount)
    {
        result = false;
    }
    
    cout << result;
}
