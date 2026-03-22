#include <iostream>

using namespace std;

int main() {
    int opcion;

    // El ciclo do-while asegura que el menú aparezca al menos una vez
    do {
        cout << "\n--- MENU DE OPCIONES ---" << endl;
        cout << "1. Mostrar numeros del 1 al 5" << endl;
        cout << "2. Mostrar pares del 1 al 10" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Numeros del 1 al 5: ";
                for(int i = 1; i <= 5; i++) {
                    cout << i << " ";
                }
                cout << endl;
                break;
            case 2:
                cout << "Pares del 1 al 10: ";
                for(int i = 1; i <= 10; i++) {
                    // Verificacion de par usando el operador modulo
                    if(i % 2 == 0) {
                        cout << i << " ";
                    }
                }
                cout << endl;
                break;
            case 3:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida, intente de nuevo." << endl;
        }

    // Se repite mientras la opcion no sea 3
    } while(opcion != 3);

    return 0;
}
