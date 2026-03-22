#include <iostream>
using namespace std;

int main() {
	int clave;
	
	cout << "Ingrese la contraseña: ";
	cin >> clave;
	
	while (clave != 1234) {
		cout << "Error: Contraseña incorrecta. Intente de nuevo: ";
		cin >> clave;
	}
	
	cout << "Contraseña correcta. Bienvenido.";
	
	return 0;
}
