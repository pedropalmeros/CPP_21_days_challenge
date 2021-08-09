/*
Paso por valor en funciones
*/

#include <iostream>

using namespace std; 

void intercambiar(int x, int y);

int main(){
int x = 5, y = 10;
cout << "main(). Antes del intercambio, x: " << x << " y: " << y << "\n";
intercambiar(x,y);
cout << "main(). Después del intercambio, x: " << x << " y: " << y << "\n";
return 0;
}

void intercambiar (int x, int y){
    int temp;
    cout << "Intercambiar(). Antes del intercambio, x: " << x << " y: " << y << endl; 
    temp = x;
    x = y;
    y = temp;

    cout << "Intercambiar(). Después del intercambio, x: " << x << " y: " << y << endl; 
}
