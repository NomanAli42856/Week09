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
        int temp;
        cout << "Enter the number : ";
        cin >> temp;
        for(int i = 0;i <= idx ; i++)
        {
            if(temp==arr[i])
            {
                cout << "Already Entered." << endl;
                idx--;
            }
            else
            {
                arr[idx]=temp;
                break;
            }
            i++;
        }
        
    }
    for(int idx=0;idx<size;idx++)
    {
            cout << arr[idx] << "\t";
    }

    
}