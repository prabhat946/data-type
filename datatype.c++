//Name: prabhat
//PRN:23070123040
//Aim:Checking Data Type in C++

#include <iostream>
#include<string>
using namespace std;

int main() {
    int num;
    float decimal;
    char mychar;
    bool myBoolVar;
    string mystringvar;
    double num2;
    
    cout<<"Enter integer:";
    cin>>num;
    cout<<"Size is "<<sizeof(num)<<"\n";
    cout<<"Enter float:";
    cin>>decimal;
    cout<<"Size is "<<sizeof(decimal)<<"\n";
    cout<<"Enter char :";
    cin>>mychar;
    cout<<"Size is "<<sizeof(mychar)<<"\n";
    cout<<"Enter string :";
    cin>>mystringvar;
    cout<<"Size is "<<sizeof(mystringvar)<<"\n";
    cout<<"Enter a double :";
    cin>>num2;
    cout<<"Size is "<<sizeof(num2)<<"\n";
    cout<<"Enter a boolean: ";
    cin>>myBoolVar;
    cout<<"Size is "<<sizeof(myBoolVar)<<"\n";
}


/*Output:
Enter integer:1
Size is 4
Enter float:1.5
Size is 4
Enter char :s
Size is 1
Enter string :welcom
Size is 32
Enter a double :2.55555
Size is 8
Enter a boolean: 1
Size is 1*/
