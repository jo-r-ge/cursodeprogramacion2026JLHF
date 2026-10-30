#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "ingrese el primer numero: ";
    cin >> num1;
    cout << "ingrese el segundo numero: ";
    cin >> num2;

    if (num1 > num2) {
        cout << "El primer numero es mayor que el segundo." << endl;
    } else if (num1 < num2) {
        cout << "El segundo numero es mayor que el primero." << endl;
    } else {
        cout << "Ambos numeros son iguales." << endl;
    }
    return 0;
}