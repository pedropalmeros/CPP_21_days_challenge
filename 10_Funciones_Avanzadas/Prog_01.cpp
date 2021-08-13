/*
Sobrecarga de funciones miembro de una clase
*/

#include <iostream>

using namespace std; 

// Declaración de la clase rectángulo
class  Rectangulo{
public: 
    // constructores
    Rectangulo(int ancho, int altura);
    ~Rectangulo(){}

    void DibujarFigura() const;
    void DibujarFigura(int unAncho, int unaAltura) const;
private:
    int suAncho;
    int suAltura;
};

//Implementación del constructor
Rectangulo::Rectangulo(int ancho, int altura){
    suAncho = ancho;
    suAltura = altura;
}

//Función DibujarFigura sobrecargada - no muestra 