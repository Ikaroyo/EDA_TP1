/* Haga un programa en donde se ingresará una cantidad X de segundos, para luego
convertir a horas, minutos y segundos. */

#include <iostream>

using namespace std;

int main()
{
    float segundos;
    cout << "Ingrese cantidad de segundos: ";
    cin >> segundos;
    cout << "Total de horas: " << segundos / 3600 << endl;
    cout << "Total de minutos: " << segundos / 60 << endl;
    cout << "Total de segundos: " << segundos << endl;
    return 0;
}