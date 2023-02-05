#include <iostream>
using namespace std;
main()
{
    string name;
    int vowel=0;
    getline(cin,name);
    int count=name.length();
    for (int index=count ;index >=0;index--)
    {
        if (name[index]=='a'||name[index]=='e'||name[index]=='i'||name[index]=='o'||name[index]=='u')
        {
            vowel++;
        }
    }
    cout << vowel;
     
    
}   

    
