#include<iostream>
using namespace std;
main()
{
    system("cls");
    
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    float arr[size];
    float sum = 0;
    for(int i=0; i < size; i++)
    {
        cout<<"Enter  the resistance of resistor " << i+1 << " : ";
        cin>> arr[i];
        sum = sum + arr[i];
    }
    cout<<"Equilant Resistance  = " << sum ;
}