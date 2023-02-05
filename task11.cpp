#include <iostream>
using namespace std;
main()
{
    string name;
    char letter;
    int index=0;
    bool isfound=false;
    getline(cin,name);
       cout << "enter character";
      cin >> letter;
      while(name[index]!='\0')
      {
        if (name[index]==letter)
        {
            isfound=true;
            break;
        }
       
      index++;
      }
      if (isfound==true)
      {
        cout << "found";
      }
      else 
      {
        cout << "not found";
      }
}