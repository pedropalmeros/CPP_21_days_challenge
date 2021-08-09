#include <iostream>

using namespace std;

int main(){
    
    int intUno;
    int &rUnaRef = intUno;

    intUno = 5; 
    cout << "intUno:\t"   << intUno   << endl; 
    cout << "rUnaRef:\t"  << rUnaRef  << endl; 
    cout << "&intUno:\t"  << &intUno  << endl; 
    cout << "&rUnaRef:\t" << &rUnaRef << endl; 

    int intDos = 8;
    rUnaRef = intDos;
    cout << "\nintUno:\t"   << intUno << endl; 
    cout << "intDos: \t" <<intDos << endl; 
    cout << "rUna Ref: \t" << rUnaRef << endl;
    cout << "&intUno: \t" << &intUno << endl; 
    cout << "&intDos: \t" << &intDos << endl; 
    cout << "&rUnaRef: \t" << &rUnaRef << endl; 

    return 0; 

}