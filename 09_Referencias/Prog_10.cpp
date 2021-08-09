/*
Paso de apuntadores a objetos
*/

#include <iostream>

using namespace std; 

class GatoSimple{
public:
    GatoSimple();
    GatoSimple(GatoSimple &);
    ~GatoSimple();
};

GatoSimple::GatoSimple(){
    cout << "Constructor de GatoSimple ... " << endl; 
}

GatoSimple::GatoSimple(GatoSimple &){
    cout << "Constructor de copid de Gato Simple " << endl; 
}

GatoSimple::~GatoSimple(){
    cout << "Destructor de GatoSimple" << endl; 
}

GatoSimple FuncionUno(GatoSimple elGato);
GatoSimple * FuncionDos(GatoSimple *elGato);

int main(){
    cout << "Crear un gato " << endl; 
    GatoSimple  Pelusa;
    cout << "Llamando a FuncionUno ..." << endl; 
    FuncionUno(Pelusa);
    cout << "Llamando a FuncionDos ..." << endl; 
    FuncionDos(&Pelusa);
    return 0;     
    }

// FuncionUno, pasa por valor
GatoSimple FuncionUno(GatoSimple elGato){
    cout << "FuncionUno. Regresando ...." << endl;
    return elGato;
}
 
// FuncionDos, pasa por referencia - con apuntador
GatoSimple * FuncionDos(GatoSimple *elGato){
    cout << "FuncionDos. Regresando ... " << endl; 
    return elGato;
}