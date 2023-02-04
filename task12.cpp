#include<iostream>
using namespace std;

main()
{

    system("cls");
    
    string name;
    cout << "String batao : ";
    getline(cin,name);
    int idx = name.length();
    for(int i=0;i<idx;i++)
    {
        if(name[i]=='z')
        {
            name[i]='a';
        }
        else if(name[i]=='Z')
        {
            name[i]='A';
        }
        else if(name[i]==' ')
        {
            name[i]=' ';
        }
        else
        {
            name[i] = name[i] + 1;
        }
    }
    for(int i=0;i<idx;i++)
    {
        cout << name[i];
    }
}
