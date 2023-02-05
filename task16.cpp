#include <iostream>
using namespace std;
main()
{
    int size;
    int smallest = 0;
    cout << "enter arry size: ";
    cin >> size;
    float arry[size];
    for (int index = 0; index < size; index++)
    {
        cout << "enter number: ";
        cin >> arry[index];
        smallest = arry[0];
    }
        for(int index = 1; index < size; index++) 
        {

    
        if (arry[index] > smallest)
        {
            smallest = arry[index];
        }
        }
    

    cout << " smallest number is: " << smallest;
}