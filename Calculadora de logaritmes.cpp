#include <iostream>
#include <cmath>

using namespace std;

void Instruccions() {

}

void calculadoraLogaritmes() {
    cout << "Has seleccionat la calculadora de logaritmes!" << endl;
    cout << "Introdeix el numero i la base en els llocs corresponents indicats pel programa.Pots tancar aquesta funcio amb el comandament #. Escriu A per veure aquestes instruccions de nou." << endl;
    cout << endl;
    string n, b;

    while (true) {
        cout << "Introdueix el numero: ";
        cin >> n;
        cout << "Introdueix la base del logaritme: ";
        cin >> b;
        cout << endl;

        if (b == "#" or n == "#") {
            Instruccions();
            break;
        }
        if (n[0] == 'A' or b[0] == 'A') {
            calculadoraLogaritmes();
            break;
        }

        double s = stod(n);
        double x = stod(b);
        double logb10 = log10(stod(n));
        double logn = log(stod(n)) / log(stod(b));

        if (s < 0 or x == 1 or x <= 0) {
            cout << "Error: Un logaritme no pot tenir base negativa o igual a 1 o 0! Tampoc pots fer el logaritme d'un numero negatiu!" << endl;
            continue;
        } else if (s == 0) {
            cout << "Error: El logaritme de 0 no te solucio" << endl;
            continue;
        }

        cout << "Logaritme en base 10: " << logb10 << endl;
        cout << "Logaritme en base " << b << ": " << logn << endl;
        cout << endl;
    }
}

int main() {
    calculadoraLogaritmes();
    return 0;
}
