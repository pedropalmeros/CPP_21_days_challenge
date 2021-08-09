/*
Regreso de varios valores de una función por medio de apuntadores
*/

#include <iostream>

using namespace std;

short  Factor(int n, int * apAlCuadrado, int * alAlCubo);

int main(){
    int numero, alCuadrado, alCubo;
    short error;

    cout << "escriba un numero (0 - 20): ";
    cin >> numero;
    error = Factor(numero, &alCuadrado, &alCubo);
    if(!error){
        cout << "número: " << numero << endl; 
        cout << "al cuadrado: " << alCuadrado << endl; 
        cout << "al cubo: " << alCubo << endl;
    }
    else
        cout << "Se encontró un error!" << endl; 

    return 0; 
}

short Factor(int n, int *apAlCuadrado, int * apAlCubo){
    short Valor = 0;
    if (n > 20)
        Valor = 1; 
    else{
        *apAlCuadrado = n * n;
        *apAlCubo = n * n * n;
        Valor = 0;
    }

    return Valor;
        
}