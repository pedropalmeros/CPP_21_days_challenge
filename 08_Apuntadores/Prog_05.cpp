/*
Creación de objetos en el heap
The objects in the heap are created by pointers, using the word "new"
The objects in the heap have to be deleted by the programer using the word "delete"
*/

#include <iostream> 

using namespace std; 

class GatoSimple{
public:
    GatoSimple();
    ~GatoSimple();
private:
    int suEdad;
};

GatoSimple::GatoSimple(){
    cout << "Se llamó al constructor" << endl; 
}
GatoSimple::~GatoSimple(){
    cout << "Se llamó al destructor" << endl;
}

int main(){
    cout << "GatoSimple Pelusa ...." << endl; 
    GatoSimple Pelusa;
    cout << "GatoSimple *apFelix = new GatoSimple .... " << endl; 
    GatoSimple *apFelix = new GatoSimple;
    cout << "delete apFelix..." << endl; 
    delete apFelix;
    cout << "salinedo, observe cómo se va Pelusa..." << endl; 
    return 0;
}