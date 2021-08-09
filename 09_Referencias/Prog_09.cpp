/*
Regreso de varios valores de una función por medio de referencias
*/

#include <iostream>

using namespace std; 

typedef unsigned short USHORT;
enum CODIGO_ERR{ EXITO, ERROR };

CODIGO_ERR Factor( USHORT n, USHORT &RalCuadrado, USHORT &RalCubo);

int main(){
    USHORT numero, alCuadrado, alCubo;

    CODIGO_ERR Resultado;

    cout << "Escriba un número (0 - 20): ";
    cin >> numero;

    Resultado = Factor( numero, alCuadrado, alCubo);

    if(Resultado == EXITO){
        cout << "numero: " << numero << endl; 
        cout << "al cuadrado: " << alCuadrado << endl; 
        cout << "al cubo: " << alCubo << endl; 
    }
    else
    cout << "Se encontró un error!" << endl; 
}

CODIGO_ERR Factor( USHORT n, USHORT &RalCuadrado, USHORT &RalCubo){
    if (n > 20){
        return ERROR; 
    }
    else { 
        RalCuadrado = n*n;
        RalCubo = n*n*n;
        return EXITO;
    }
}