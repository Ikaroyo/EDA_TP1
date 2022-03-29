/* Escriba un programa que lea de la entrada estándar base y altura de un rectángulo y
escriba en la salida estándar su perímetro y superficie.
. */

#include <iostream>

using namespace std;

int main() {
    float base, altura, perimetro, superficie;
    cout << "Ingrese base: ";
    cin >> base;
    cout << "Ingrese altura: ";
    cin >> altura;
    perimetro = 2 * (base + altura);
    superficie = base * altura;
    cout << "El perimetro del rectangulo es: " << perimetro << endl;
    cout << "La superficie del rectangulo es: " << superficie << endl;
    return 0;
}