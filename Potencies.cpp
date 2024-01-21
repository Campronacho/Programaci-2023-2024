#include <iostream>
using namespace std;

int main() {
    string a, b;
    double p;
    while (true) {
        cout << "Introdueix la base: ";
        cin >> a;
        cout << "Introdueix l'exponent: ";

        cin >> b;
        cout << endl;

        if (a == "#" or b == "#") {
            //Instruccions();
            break;
        }
        else if (a == "A" or b == "A") {
            //calculadoraPotencies();
            break;
        }
        double base = stod(a);
        double exponent = stod(b);
        if (exponent == 0) {
            p = 1;
        }
        else {
            int c = 1;
            p = 1.0; // potencies fraccionarias
            double bs = (exponent > 0) ? base: 1.0/base; // depenent de si es negatiu o positiu multiplicarem o dividirem
            while (c <= (exponent >0 ? exponent:-exponent)) {
                p *= bs;
                ++c;
            }
        }
        cout << base <<"^"<< exponent << " = " << p << endl;
        cout << endl;
        cout << "Escriu A per veure les instruccions de nou. O segueix operant"<< endl;
        cout << endl;
    }
}
