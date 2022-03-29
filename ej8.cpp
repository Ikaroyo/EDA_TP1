/* La calificación final de un estudiante es la media ponderada de tres notas: la nota de
prácticas que cuenta un 30% del total, la nota teórica que cuenta un 60% y la nota de participación
que cuenta el 10% restante. Escriba un programa que lea de la entrada estándar las tres notas de
un alumno y escriba en la salida estándar su nota final.  */


#include <iostream>

using namespace std;

int main() {
    float nota1, nota2, nota3, notaFinal;
    cout << "Ingrese nota 1: ";
    cin >> nota1;
    cout << "Ingrese nota 2: ";
    cin >> nota2;
    cout << "Ingrese nota 3: ";
    cin >> nota3;
    notaFinal = (nota1 * 0.3) + (nota2 * 0.6) + (nota3 * 0.1);
    cout << "La nota final es: " << notaFinal << endl;
    return 0;
}