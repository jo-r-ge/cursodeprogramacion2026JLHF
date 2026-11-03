#include <iostream>

int main() {
    int numero;
    std::cout << "ingrese un numero entero: ";
    std::cin >> numero;

    int divisores = 0;

    for(int i = 1; i <=numero; i++) {
        if (numero % i == 0) {
                divisores++;
        }
    }

    if (divisores == 2){
        std::cout << numero << "es primo." << std::endl;
    } else {
        std::cout << numero << "no es primo." << std::endl;

    }

    return 0;
}