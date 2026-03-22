#include <iostream>

using namespace std;

int main() {
    int numero;
    int suma = 0; // Inicializar acumulador

    cout << "Ingrese numeros para sumar (0 para finalizar):" << endl;
    
    // Solicitar el primer número antes de evaluar el while
    cin >> numero;

    // Ciclo while para pedir números hasta que sea 0
    while (numero != 0) {
        suma += numero; // Suma acumulativa [10]
        cout << "Ingrese otro numero (0 para finalizar):" << endl;
        cin >> numero;
    }

    cout << "El total acumulado es: " << suma << endl;

    return 0;
}
