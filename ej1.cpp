/*
Comentario de varias lineas

A) Haga un programa que permita la entrada de datos, ingresando el nombre y apellido del
usuario, además debe mostrar el nombre_completo por pantalla. (considera los espacios)
B) Ejemplifique, como se coloca un comentario de una o varias líneas.
C) Como se baja un renglón al mostrar algo por pantalla, nombre alternativas.
*/

// Comentario simple

#include <iostream>

using namespace std;

int main() {
	string nombre, apellido;
	cout << "Ingrese su nombre: ";
	cin >> nombre;
	cout << "Ingrese su apellido: ";
	cin >> apellido;
	cout << "Su nombre completo es: " << nombre << " " << apellido << endl;

    /* Mostrar un texto con salto de lineas */
    cout << "Hola\n" << "Mundo" << endl;
    /* Otra forma */
    cout << "Hola\nMundo" << endl;

	return 0;
}