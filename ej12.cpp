/* Escriba un fragmento de programa que intercambie (swap) los valores de dos variables. */

#include <iostream>

using namespace std;

int main()
{
    int a, b, aux;
    cout << "Ingrese a: ";
    cin >> a;
    cout << "Ingrese b: ";
    cin >> b;
    cout << "Antes de intercambiar a = " << a << " y b = " << b << endl;
    aux = a;
    a = b;
    b = aux;
    cout << "Despues de intercambiar a = " << a << " y b = " << b << endl;
    return 0;
}