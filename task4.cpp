#include <iostream>
using namespace std;
main()
{
int size;

    cout << "enter arry size: ";
    cin >> size;
    float arry[size];
    for (int index=0;index<size ;index++)
    {
        cout << "enter number: ";
        cin >>arry[index];
    }
    for (int index=size-1;index >=0;index=index-1)
    {
        cout << arry[index] << " ";
    }
   
}