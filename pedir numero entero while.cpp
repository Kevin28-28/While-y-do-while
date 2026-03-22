#include <iostream>
using namespace std;

int main() {
    int numero;

    // 1. Solicitar y validar que sea mayor a 1
    cout << "Ingrese un numero entero mayor a 1: ";
    cin >> numero;

    while (numero <= 1) {
        cout << "Numero invalido. Ingrese un numero mayor a 1: ";
        cin >> numero;
    }

    // 2. Mostrar numeros descendentes hasta 1 usando while
    cout << "Cuenta regresiva:" << endl;
    while (numero >= 1) {
        cout << numero << " ";
        numero--; // Decrementa para evitar bucle infinito
    }

    cout << endl;
    return 0;
}
