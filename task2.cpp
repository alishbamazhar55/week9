#include <iostream>
using namespace std;
main()
{ 
    int number;
    int sum=0;
    int average;
    cout << "enter number: ";
    cin >> number;
    float n[number];
    for (int index=0;index<number;index++)
    {
         cout << "enter value: ";
        cin >> n[number];
        sum=sum+n[number];
    }
    average=sum/number;
    cout << "sum is " << sum << endl;
    cout << "average is : " << average << endl;
}