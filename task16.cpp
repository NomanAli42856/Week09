#include<iostream>
using namespace std;

main()
{

    system("cls");
    
    int size;
    int sum = 0;
    cout << "Enter the size of the array : ";
    cin >> size;

    int arr[size];
    for(int idx=0;idx<size;idx++)
    {
        cout << "Enter the number : ";
        cin >> arr[idx];
    }

    int mul;
    cout << "Enter the number which you want to multiply : ";
    cin >> mul;
    for(int idx=0;idx < size;idx++)
    {
        cout << arr[idx]*mul << "\t";
    }
    
}