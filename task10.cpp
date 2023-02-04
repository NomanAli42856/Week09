#include<iostream>
using namespace std;

main()
{

    system("cls");
    
    string name;
    cout << "String batao : ";
    getline(cin,name);
    int idx = name.length();
    for(int i = idx;i>=0;i--)
    {
        cout << name[i];
    }
}