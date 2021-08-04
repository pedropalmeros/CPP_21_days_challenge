/*
In this program the correct usage of the pointers is shown
*/
#include <iostream> 

using namespace std;

typedef unsigned short int USHORT;
int main(){
    // Variable creation
    USHORT Age;
    // Null pointer creation
    USHORT *ptrAge = NULL;

    Age = 5;
    cout << "Age: " << Age << endl; 

    // Pointer initialization:
    ptrAge = &Age;
    cout << "*ptrAge: " << *ptrAge << endl; 
    cout << "Age: " << Age << endl; 
    
    *ptrAge = 7;
    cout << "*ptrAge: " << *ptrAge << endl; 
    cout << "Age: " << Age << endl; 

    *ptrAge = 9;
    cout << "*ptrAge: " << *ptrAge << endl; 
    cout << "Age: " << Age << endl;   
}