#include <iostream>
using namespace std;
main()
{
    string name;
    bool even=false;
    getline(cin,name);
    int count=name.length();
    cout << count << endl;
    if (count %2==0)
    {
       even=true;
    }
    else 
    {
        even=false;
    }
cout << even;
}

    
