#include<iostream>
using namespace std;

main()
{

    system("cls");
    
    int arr[5] = {4,5,9,8,54};
    string name = "Noman";
    for(int idx=0;idx<5;idx++)
    {
        cout << arr[idx] << "\t";
        cout << name[idx] << "\t";
    }
    
}