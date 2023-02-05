#include <iostream>
using namespace std;
main()
{
    string name;
    getline(cin ,name);
    string result="something";
    int count=name.length();
   cout  <<  result << " ";
    for (int index=0 ;index< count;index++)
    {
cout << name[index];
    }
 

}