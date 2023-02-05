 #include <iostream>
 using namespace std;
 main ()
 {
    int size;
    float sum=0;
    int number;
    cout << "enter size: ";
    cin >> size;
    float resistance[size];
    for (int index=0; index < size ; index++)
    {  
        cout <<"enter number: ";
        cin >> resistance[size]; 
         sum=sum+resistance[size];
    }
     cout << sum  << " ohm ";
    
    

 }