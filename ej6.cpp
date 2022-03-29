/* Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final media
de los cuatro alumnos. */

#include <iostream>

using namespace std;

int main() {
    float nota_alumno1, nota_alumno2, nota_alumno3, nota_alumno4;
    float nota_final_media;
    cout << "Ingrese nota de alumno 1: ";
    cin >> nota_alumno1;
    cout << "Ingrese nota de alumno 2: ";
    cin >> nota_alumno2;
    cout << "Ingrese nota de alumno 3: ";
    cin >> nota_alumno3;
    cout << "Ingrese nota de alumno 4: ";
    cin >> nota_alumno4;
    nota_final_media = (nota_alumno1 + nota_alumno2 + nota_alumno3 + nota_alumno4) / 4;
    cout << "La nota final media es: " << nota_final_media << endl;
    return 0;
}