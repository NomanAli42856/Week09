#include<iostream>
using namespace std;

main()
{

    system("cls");
    
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    int arr[size];
    for(int idx=0;idx<size;idx++)
    {
        cout << "Enter the number : ";
        cin >> arr[idx];
    }
    for(int idx=0;idx<size;idx++)
    {
        cout << arr[idx] << "\t";
    }
    
}