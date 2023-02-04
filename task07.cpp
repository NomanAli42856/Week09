#include<iostream>
using namespace std;

main()
{

    system("cls");
    
    string name;
    bool isFound=false;
    cout << "String batao : ";
    getline(cin,name);
    int idx = name.length();
    char ch;
    cout << "Enter the character you wanna check : ";
    cin >> ch;
    for(int i = 0 ; i <= idx;i++)
    {
        if(ch == name[i])
        {
            isFound = true;
        }
    }
    if(isFound)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }
}