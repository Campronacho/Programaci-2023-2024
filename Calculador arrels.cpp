#include <iostream>
#include <cmath>

using namespace std;

 main() {
    double rd;
    int e;

    while (true) {
        cout << endl;
        cout << "Introdueix el radicand: ";
        cin >> rd;
        cout << endl;
        if (a == '#') {
            break;
        }
        if (a == 'A') {
            calculadoraArrels();
            break;
        }

        if (rd == 0) {
            break;
        }

        cout << "Introdueix l'exponent: ";
        cin >> e;

        if (e < 0) {
            cout << "Error: L'exponent ha de ser un nombre enter positiu." << endl;
            continue;
        }

        double r = pow(rd, 1.0 / e);
        cout << endl;
        cout << "L'arrel " << e <<  " de " << rd << " es: " << r << endl;
        cout << endl;
    }
}
