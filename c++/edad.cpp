/ edad.cpp · pedir la edad y decir cuántos años tendrá en 2030

#include <iostream>

using namespace std;

int main() {
    
    int edad;
    cout << "Ingrese su edad"<< endl;
    cin >> edad ; 
    int nuevaedad = edad + 4;
    cout << "la edad de la persona en 2030 sera de:  "<< nuevaedad;
    return 0;

}