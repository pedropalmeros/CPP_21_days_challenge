#include <iostream>

using namespace std;

void intercambiar(int *x, int *y);

int main(){
    int x = 5, y = 10;
    cout << "Main. Antes del intercambio: ";
    cout << "x: " << x << " y: " << y << endl; 
    intercambiar(&x,&y);
    cout << "Main. Depués del intercambio: ";
    cout << "x: " << x << " y: " << endl; 
    return 0; 
}

void intercambiar(int *apx, int *apy){
    int temp;
    cout << "Intercambiar. Antes del intercambio, ";
    cout << "*apx: " << *apx << " *apy: " << *apy << endl; 

    temp = *apx; 
    *apx = *apy;
    *apy = temp; 

    cout << "Intercambiar. Después del intercambio, ";
    cout << "*apx: " << *apx << " *apy: " << *apy << endl; 
}