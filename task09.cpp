#include<iostream>
using namespace std;

main()
{

    system("cls");
    
    string name;
    cout << "String batao : ";
    getline(cin,name);
    int idx =0;
    while(name[idx] != '\0')
    {
        idx++;
    }
    if(idx%2==0)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }
}