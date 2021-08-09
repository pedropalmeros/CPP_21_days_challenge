/*
Prog_12: Paso de referencias a objetos
*/

#include <iostream>

using namespace std; 

class GatoSimple{
public:
    GatoSimple();
    GatoSimple(GatoSimple &);
    ~GatoSimple();
    int ObtenerEdad() const {return suEdad; } 
    void AsignarEdad(int edad){ suEdad = edad; }
private:
    int suEdad; 
};

GatoSimple::GatoSimple(){
    cout << "Constructor de GatoSimple ..." << endl; 
    suEdad = 1; 
}

GatoSimple::GatoSimple(GatoSimple &)
{
    cout << "Constructor de copia de GatoSimple " << endl; 
}

GatoSimple::~GatoSimple(){
    cout << "Destructor Gato Simple " << endl; 
}

const GatoSimple & FuncionDos(const GatoSimple & elGato);

int main(){
    cout << "Crearr un gato ... " << endl; 
    GatoSimple Pelusa;
    cout << "Pelusa tiene " << Pelusa.ObtenerEdad() << " anios de edad." << endl; 
    int edad = 5; 
    Pelusa.AsignarEdad(edad);
    cout << "Pelusa tiene " << Pelusa.ObtenerEdad() << " anios de edad." << endl; 
    cout << "Llamando a FuncionDos ... " << endl; 
    FuncionDos(Pelusa);
    cout << "Pelusa tiene " << Pelusa.ObtenerEdad() << " anios de edad." << endl; 
    }

// FuncionDos, pasa una referencia aun objeto const
const GatoSimple & FuncionDos(const GatoSimple & elGato){
    cout << "FuncionDos. Regresando " << endl; 
    cout << "Ahora Pelusa tiene " << elGato.ObtenerEdad();
    cout << "anios de edad" << endl; 
    //elGato.AsignarEdad(8)
    return elGato;
} 