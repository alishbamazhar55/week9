#include <iostream>
using namespace std;
main()
{
    int size;
    int number;
    int product;
    cout << "enter arry size: ";
    cin >> size;
    float arry[size];
    for (int index=0;index<size ;index++)
    {
        cout << "enter number: ";
        cin >>arry[index];
    }
    cout << "enter number that you want to multiply: ";
    cin >> number;
    for (int index=size-1;index >=0 ;index--)
    {
         product=number*arry[index];
         cout << product <<" ";
    }
}