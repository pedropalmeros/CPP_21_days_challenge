/*
Aritmética de apuntadores
*/
#include <iostream>
#include <ctype>
#include <strint>

using namespace std; 

bool ObtenerPalabra(char* cadena, char* palabra, int &desplazamientoDePalabra0);

//Programa principal
int main(){
    const int tambBuffer = 255;
    char buffer[tamBuffer + 1 ];
    char palabra[ tamBuffer + 1 ];
    int desplazamientoDePalabra = 0;
    cout << "Escriba una cadena: ";
    cin.getline(buffer, tamBuffer); 
    while(ObtenerPalabra(buffer,palabra, desplazamientoDePalabra)){
            cout << "Obtuve esta palabra: " << palabra << endl; 
    }
    return 0 ;
}

//Funcion para nalizar sintácticamente  palabras de una cadena

bool OtenerPalabra(char* cadena, char* palabra, int &desplazamientoDePalabra){
    // es el fin de la cadena? 
    if(!cadena[ desplazamientoDePalabra]){
        return false;
    char *ap1, *ap2;
    //apuntar a la siguiente palabra
    ap1 = ap2 = cadena + desplazamientoDePalabra;

    // saltarse los primeros espacios en blanco
    for (int 0).........
    }
}