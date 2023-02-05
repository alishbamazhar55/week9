#include <iostream>
using namespace std;
main()
{
    int array1[2];
    int size;
    cout << "enter size: ";
    cin >> size;
    int array2[size];
    cout << " enter first index of array 1";
    cin >> array1[0];
  cout << "enter 2nd index of array 1";
    cin >> array1[1];
    for (int index=0;index <size ;index++)
    {
        cout << "enter number";
        cin >> array2[index];
        
    }
    cout << array1[0] << " ";
    
    for (int index=0;index <size ;index++)
    {   
       
        cout << array2[index] << " " ;
    
    }
    cout << array1[1];
}