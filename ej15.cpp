/* Haga un programa que tenga como entrada una cantidad de dinero en pesos
argentinos, y su salida será el monto convertido a dólares, con dólar a 100$. */

#include <iostream>

using namespace std;

int main()
{
    float pesos, dolares;
    cout << "Ingrese pesos argentinos: ";
    cin >> pesos;
    dolares = pesos / 100;
    cout << "En dolares es: " << dolares << endl;
    return 0;
}