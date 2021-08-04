/*
Si declara un métod de la clase con "const", está prometiendo que el método no cambiará el valor de ninguno de los miembros de la clase
void UnaFucion() const;
*/

#include <iostream>

using namespace std;

class Gato{
public:
	Gato(int edadInicial):suEdad(edadInicial){}
	~Gato(){}
	int ObtenerEdad() const {return suEdad;}
	void AsignarEdad(int edad) { suEdad = edad;}
	void Maullar() const {cout << "Miauuuuu.\n";}
private:
	int suEdad;
};

int main(){
	Gato Pelusa(5);
	Pelusa.Maullar();
	cout << "Pelusa es un gato que tiene ";
	cout << Pelusa.ObtenerEdad() << " anios de edad.\n";
	Pelusa.Maullar();
	Pelusa.AsignarEdad(7);
	cout << "Ahora Pelusa tiene ";
	cout << Pelusa.ObtenerEdad() << " anios de edad.\n";
	return 0;
}