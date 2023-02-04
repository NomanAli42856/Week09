#include<iostream>
using namespace std;

main()
{

    system("cls");
    
    string name;
    cout << "String batao : ";
    getline(cin,name);
    int idx = name.length();
    char ch;
    cout << "Enter the character you wanna check : ";
    cin >> ch;
    if(ch == name[idx-1])
    {
        cout << "<<<<<<   Same   >>>>>>";
    }
    else
    {
        cout << "<<<<<<   Not Same   >>>>>>";
    }
}