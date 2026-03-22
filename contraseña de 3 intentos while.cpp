#include <iostream>
#include <string>

using namespace std;

int main() {
    string clave_correcta = "1234"; // Define tu contraseña aquí
    string clave_ingresada;
    int intentos = 0;
    bool acceso = false;

    while (intentos < 3 && !acceso) {
        cout << "Introduce la contrasena: ";
        cin >> clave_ingresada;

        if (clave_ingresada == clave_correcta) {
            acceso = true;
            cout << "Bienvenido amigo" << endl;
        } else {
            intentos++;
            if (intentos < 3) {
                cout << "Error. Te quedan " << 3 - intentos << " intentos." << endl;
            }
        }
    }

    if (!acceso) {
        cout << "Acceso denegado" << endl;
    }

    return 0;
}
