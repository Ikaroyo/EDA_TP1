/* Escribe un programa que lea de la entrada estándar dos números y muestre en la salida
estándar su suma, resta, multiplicación y división. */

#include <iostream>

using namespace std;

int main() {
    float num1, num2, suma, resta, multiplicacion, division;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = num1 / num2;
    cout << "La suma es: " << suma << endl;
    cout << "La resta es: " << resta << endl;
    cout << "La multiplicacion es: " << multiplicacion << endl;
    cout << "La division es: " << division << endl;
    return 0;
}