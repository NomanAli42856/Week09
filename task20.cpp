#include<iostream>
using namespace std;
main()
{
    system("cls");
    
    int size;
    int frst[2] = {1,10};
    cout<<"Enter the size of array: ";
    cin>>size;
    int scnd[size];
    int fnl[size+2];
    fnl[0] = frst[0];
    fnl[size+1] = frst[1];
    for(int i=0; i < size; i++)
    {
        cout << "Enter the number : ";
        cin >> fnl[i+1];
    }
    for(int i= 0; i < size+2; i++)
    {
        cout  <<  fnl[i] << "\t";
    }
}