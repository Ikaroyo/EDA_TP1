/* Realice un programa que pida valores enteros para hora, otra para minutos, y otra para
segundos, como resultado lo transforma y muestra el total a cantidad de segundos. */

#include <iostream>

using namespace std;

int main()
{
    int hora, minutos, segundos;
    cout << "Ingrese hora: ";
    cin >> hora;
    cout << "Ingrese minutos: ";
    cin >> minutos;
    cout << "Ingrese segundos: ";
    cin >> segundos;
    cout << "Total de segundos: " << (hora * 60 * 60) + (minutos * 60) + segundos << endl;
    return 0;
}