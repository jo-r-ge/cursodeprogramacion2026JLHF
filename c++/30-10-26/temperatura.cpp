#include <iostream>
using namespace std;
int main() {
    float celsius;
    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> celsius;
    
    //Usamos 9.0 y 5.0 para evitar la división entera incorrecta
    float fahrenheit = (celsius * 9.0 / 5.0) + 32;

    cout << "La temperatura en grados Fahrenheit es: " << fahrenheit << endl;
    return 0;
}
