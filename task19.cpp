#include <iostream>
using namespace std;
main()
{
    float array[4];
    float totaldue;
    cout << "enter total due: ";
    cin >> totaldue;
    bool isfound=false;
    int sum;    
    for (int index=0 ;index<4;index++)
    {
        cout <<  "enter array number: ";
        cin >> array[index];
        float quater=array[0]*0.25;
    float dime=array[1]*0.10;
    float nickel=array[2]*0.05;
    float penny=array[3]*0.01;
    sum=quater+dime+nickel+penny;
    if (sum >= totaldue)
    {
        isfound= true;
        break;
    }
  }
    if (isfound==true)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}