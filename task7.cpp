#include <iostream>
using namespace std;
main()
{
    string name;
    getline(cin,name);
    int index=0;
    while(name[index] !='\0')
    {
        cout << name[index] << " at " << index << endl;
        index=index+1;
    }

}