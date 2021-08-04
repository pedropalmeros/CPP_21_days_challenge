/*
*/

#include <iostream>

using namespace std; 

int main(){
    unsigned short int miEdad = 5, suEdad = 10;
    unsigned short int *apEdad = &miEdad;

    cout << "miEdad: " << miEdad<< "   suEdad: " << suEdad << endl; 
    cout << "&miEdad: " << &miEdad << "   &suEdad: " << &suEdad << endl; 
    cout << "apEdad: " << apEdad << endl; 

    apEdad = &suEdad; 
    cout << "miEdad: " << miEdad<< "   suEdad: " << suEdad << endl; 
    cout << "&miEdad: " << &miEdad << "   &suEdad: " << &suEdad << endl; 
    cout << "apEdad: " << apEdad << endl; 
}