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
        cout << "Character   " <<  name[idx] << "   at index   " << idx << endl;
        idx++;
    }
    
}