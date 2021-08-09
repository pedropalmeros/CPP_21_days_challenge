#include <iostream>

using namespace std; 

class GatoSimple{
public:
    GatoSimple(int edad, int peso);
    ~GatoSimple(){}
    int ObtenerEdad(){ return suEdad; }
    int ObtenerPeso(){ return suPeso; }
private:
    int suPeso;
    int suEdad;
};

GatoSimple::GatoSimple(int edad, int peso){
    suEdad = edad; 
    suPeso = peso;
}

int main(){
    GatoSimple Pelusa(5,8);
    GatoSimple &rGato=Pelusa;

    cout << "Pelusa tiene: " ;
    cout << Pelusa.ObtenerEdad() << "anios de edad. \n";
    cout << "Y pelusa pesa: ";
    cout << rGato.ObtenerPeso() << " libras.\n";
    return 0;
}