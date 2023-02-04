#include<iostream>
using namespace std;

main()
{

    system("cls");
    
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    int numbers[size];
    for(int idx=0;idx<size;idx++)
    {
        cout << "Enter the number : ";
        cin >> numbers[idx];
    }

    int largest = numbers[0];
    for(int idx=0;idx<size;idx++)
    {
        if(largest < numbers[idx])
        {
            largest = numbers[idx];
        }
    }
    cout << largest;
    
}