/*
This program shows the direction of memory each variable uses.
*/

#include <iostream>

using namespace std; 

int main(){
    unsigned short shortVar = 5;
    unsigned long longVar = 65535;
    long sVar =-65535;

    cout << "Variable de tipo short sin singno: \t";
    cout << shortVar << endl;
    cout << "Dirección de variable de tipo short: \t"<< &shortVar << endl; 

    cout << "Variable de tipo long sin signo: \t" << longVar << endl; 
    cout << "Dirección de variable tipo long sin signo: \t" << &longVar << endl; 

    cout << "Variable de tipo long con signo: \t" << sVar << endl; 
    cout << "Dirección de variable tipo long sin signo: \t" << &sVar << endl; 
}