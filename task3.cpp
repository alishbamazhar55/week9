#include <iostream>
using namespace std;
main()
{  
    bool isfound=false;
    int size;
    int number;
    cout << "enter arry size: ";
    cin >> size;
    float arry[size];
    for (int index=0;index<size ;index++)
    {
        cout << "enter number: ";
        cin >>arry[index];
    }
    cout << "enter number you want to found";
    cin >> number;
     for (int index=0;index<size ;index++)
     {
    if (number==arry[index] )
    {
       isfound=true;
       break;
    }
     }
     if (isfound==true)
     {
        cout << "number found " << endl;
     }
     else {
        cout << "number no found" << endl;
     }

}