/* Escribe la siguiente expresión en C++. Use precisión para la salida del cout.
A) f(a,b)= (a/b) + 1
B) f(a,b)= (a+b)/(c+d)
C) f(a,b)= (a+(b/c))/(d+(e/f))
D) f(a,b)= a + (b/(c-d))
*/

/* setprecision */

#include <iostream>
#include <iomanip>
//#include <cmath>
using namespace std;
using std::setprecision;

int main(){
    float a=0, b=0, c=0, d=0, e=0, f=0;
    cout << "Introduce a: ";
    cin >> a;
    cout << "Introduce b: ";
    cin >> b;
    cout << "Introduce c: ";
    cin >> c;
    cout << "Introduce d: ";
    cin >> d;
    cout << "Introduce e: ";
    cin >> e;
    cout << "Introduce f: ";
    cin >> f;
    cout << "A) " << setprecision(3) << (a/b) + 1 << endl;
    cout << "B) " << setprecision(3) << (a+b)/(c+d) << endl;
    cout << "C) "<< setprecision(3) << (a+(b/c))/(d+(e/f)) << endl;
    cout << "D) "<< setprecision(3) << a + (b/(c-d)) << endl;
}