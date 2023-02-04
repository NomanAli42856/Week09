#include<iostream>
#include<string.h>
using namespace std;
main()
{
    system("cls");

    string statement;
    cout<<"Enter a statement: ";
    getline(cin, statement);
    int len = statement.length();
    char final_[50] = "something ";
    
    int j = 0;
    for(int k = 10 ; k < len + 10 ; k++)
    {
        final_[k] = statement[j];
        j++;
    }
    for(int i = 0 ; i < len + 10 ; i++)
    {
        cout << final_[i];
    }
}