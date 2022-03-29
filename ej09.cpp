/* Escriba un programa que ingrese nombre y tiempo de nado de dos nadadoras y
determine y muestre cuál de ellas llego primero. */

#include <iostream>

using namespace std;

int main() {
    string nombre1, nombre2;
    float tiempo1, tiempo2;
    cout << "Ingrese nombre 1: ";
    cin >> nombre1;
    cout << "Ingrese nombre 2: ";
    cin >> nombre2;
    cout << "Ingrese tiempo 1: ";
    cin >> tiempo1;
    cout << "Ingrese tiempo 2: ";
    cin >> tiempo2;
    if (tiempo1 < tiempo2) {
        cout << nombre1 << " llego primero" << endl;
    } else if (tiempo1 > tiempo2) {
        cout << nombre2 << " llego primero" << endl;
    } else {
        cout << "Ambas llegaron en el mismo tiempo" << endl;
    }
    return 0;
}