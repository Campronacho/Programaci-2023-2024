/*Aquest programa fa la funció d'una calculadora aritmetica bàsica*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double n1, n2;
    char a;

    while (true) {
        cout << "Indica la teva operacio: suma (S), resta (R), multiplicacio (M), o divisio (D). Pots tancar aquesta funcio amb el commandament # o be 0.Escriu A per veure aquestes instruccions de nou." << endl;
        cin >> a;
        if (a == 'S' or a == 'R' or a == 'M' or a == 'D' or a == '0' or a == '#') {
            break; //acabar el bucle while per operar
        }
    }
    if (a == 'A'){
        while (true) {
            cout << "Indica la teva operacio: suma (S), resta (R), multiplicacio (M), o divisio (D). Pots tancar aquesta funcio amb el commandament # o be 0." << endl;
            cin >> a;
            if (a == 'S' or a == 'R' or a == 'M' or a == 'D' or a == '0' or a == '#') {
                break; //acabar el bucle while per operar
            }
        }

    }
    if (a == '0' or a == '#'){

    }
    cout << "Introdueix el primer numero: ";
    cin >> n1;

    cout << "Introdueix el segon numero: ";
    cin >> n2;

    if (a == 'S') {
        cout << "El resultat es: " << n1 + n2 << endl;
    }
    if (a == 'R') {
        cout << "El resultat es: " << n1 - n2 << endl;
    }
    if (a == 'M') {
        cout << "El resultat es: " << n1 * n2 << endl;
    }
    if (a == 'D') {
        if (n2 == 0) {
            cout << "No es pot dividir entre zero!" << endl;
        }
        else {
            cout << "El resultat es: " << n1 / n2 << endl;
        }
    }
}
