#include <iostream>
using namespace std;

int main(){
    int monto;
    cout << "Ingrese el monto a retirar(multiplo de 10): ";
    cin >> monto;

    int b200 = monto / 200;
    monto %= 200;

    int b100 = monto / 100;
    monto %= 100;

    int b50 = monto / 50;
    monto %= 50;

    int b20 = monto / 20;
    monto %= 20;

    int b10 = monto / 10;
    monto %= 10;

    cout << "Desglose de billetes:" << endl;
    cout << "Billetes de 200: " << b200 << endl;
    cout << "Billetes de 100: " << b100 << endl;
    cout << "Billetes de 50: " << b50 << endl;
    cout << "Billetes de 20: " << b20 << endl;
    cout << "Billetes de 10: " << b10 << endl;

    return 0;
}