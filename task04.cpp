#include<iostream>
using namespace std;

main()
{

    system("cls");


    int numbers[5];
    for(int i = 0; i<5 ; i++)
    {
        cout << "Enter number : ";
        cin >> numbers[i];
    }
    

    cout << "The first element is : " << numbers[0] << endl;
    cout << "The last element is : " << numbers[4];
 
}