#include<iostream>
using namespace std;

main()
{

    system("cls");
    
    string name;
    int count = 0;
    cout << "String batao : ";
    getline(cin,name);
    int idx = name.length();

    for(int i = 0 ; i <= idx;i++)
    {
        if('a' == name[i] || 'e' == name[i] || 'i' == name[i] || 'o' == name[i] || 'u' == name[i])
        {
            cout << "";
        }
        else
        {
            cout << name[i];
        }
    }

}
