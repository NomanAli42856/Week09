#include<iostream>
using namespace std;

main()
{

    system("cls");
    
    int sum = 0;
    int arr[5] = {1,2,3,4,5};

    for(int idx=0;idx<5;idx++)
    {
        sum = sum + arr[idx];
    }
    cout << "Sum of all the numbers : " << sum << endl;
    cout << "Average of numbers : " << sum/5;
    
}