/* Escriba un programa que lea de la entrada estándar el nombre de una persona en un
arreglo de caracteres. Además pide el año de nacimiento, y determina su edad en años complidos */

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char nombre[50];
    int anio_nacimiento;
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese su anio de nacimiento: ";
    cin >> anio_nacimiento;
    cout << "Su nombre es: " << nombre << endl;
    cout << "Su anio de nacimiento es: " << anio_nacimiento << endl;
    cout << "Su edad es: " << 2022 - anio_nacimiento << endl;
    return 0;
}