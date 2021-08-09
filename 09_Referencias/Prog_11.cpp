/* 
Programa 11: Paso de apuntadores const
*/

#include <iostream>

using namespace std;

class GatoSimple{
public:
    GatoSimple();
    GatoSimple(GatoSimple &);
    ~GatoSimple();
    int ObtenerEdad() const { return suEdad; }
    void AsignarEdad(int edad){ suEdad = edad;  }

private:
    int suEdad;
};

GatoSimple::GatoSimple(){
    cout << "Constructor de Gato Simple ..." << endl; 
    suEdad = 1; 
}

GatoSimple::GatoSimple(GatoSimple &){
    cout << "Constructor de copia de GatoSimple ..." << endl;
}

GatoSimple::~GatoSimple(){
    cout << "Destructor de GatoSimple ... " << endl; 
}

const GatoSimple * const FuncionDos( const GatoSimple * const elGato);

int main(){
    cout << "Crear un gato ... " << endl;
    GatoSimple Pelusa; 
    cout << "Pelusa tiene: ";
    cout << Pelusa.ObtenerEdad();
    cout << " anios de edad" << endl; 
    int edad = 5; 
    Pelusa.AsignarEdad(edad);
    cout << "Pelusa tiene " << Pelusa.ObtenerEdad() << " anios de edad." << endl; 
    cout << "Llamando a FuncionDos ..." << endl; 
    FuncionDos(&Pelusa);
    cout << endl; 
    cout << "--------------------------------" << endl; 
    cout << "Pelusa tiene " << Pelusa.ObtenerEdad() << " anios de edad." << endl; 
    return 0;
}

// FuncionDos, pasa un apuntador const

const GatoSimple * const FuncionDos(const GatoSimple * const elGato){
    cout << "FuncionDos. Regresando " << endl; 
    cout << "Ahora Pelusa Tiene " << elGato->ObtenerEdad() << " anios de edad.";
    return elGato;
}