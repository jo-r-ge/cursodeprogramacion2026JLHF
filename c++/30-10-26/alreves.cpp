#include <iostream>
using namespace std;

int main(){
    int numero;
    cout << "Ingrese un numero de 3 cifras: ";
    cin >> numero;

    int unidades = numero % 10;
    int decenas = (numero / 10) % 10;
    int centenas = numero / 100;

    int invertido = (unidades * 100) + (decenas * 10) + centenas;
    cout << "El numero invertido es: " << invertido << endl;
    return 0;
}