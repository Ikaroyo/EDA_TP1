/* Escribe un programa que lea de la entrada estándar el precio de un producto y muestre
en la salida estándar el precio del producto al aplicarle el IVA. */

#include <iostream>

using namespace std;

int main() {
	double precio;
	cout << "Introduzca el precio del producto: ";
	cin >> precio;
	cout << "El precio del producto con IVA es: " << precio * 1.21 << endl;
	return 0;
}