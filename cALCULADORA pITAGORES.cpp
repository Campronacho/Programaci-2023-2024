#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string a;

    while (true) {

        cout << "Indica que vols calcular: la mida del catet (C) o la de la hipotenusa (H).Recorda que els catets no poden ser mes grans que la hipotenusa. " << endl;
        cin >> a;

        if (a == "#"){
            //Instruccions();
            break;
        }
        if (a == "A"){
            //calculadoraPitagores();
            break;
        }

        double c1, c2, h;

        if (a == "H") {
            cout << "Vols calcular la hipotenusa. Introdueix la mida dels catets:"<< endl;;
            cout << endl;
            cout << "Catet 1: ";
            cin >> c1;
            cout <<"Catet 2: ";
            cin >> c2;
            cout << endl;
            h = sqrt(c1 * c1 + c2 * c2);
        }
        else if (a == "C") {
            cout << "Vols calcular el catet. Introdueix la mida de l'altre catet i de la hipotenusa." << endl;
            cout << endl;
            cout << "Catet: ";
            cin >> c1;
            cout << "Hipotenusa: ";
            cin >> h;
            if (c1 > h){
                cout <<"Error: els catets no poden ser mes grans que la hipotenusa !" << endl;
                continue;

            }
            c2 = sqrt(h * h - c1 * c1);
        }
        else {
            cout << "Error: valor incorrecte.\n";
            continue;
        }

        cout << "Catet1 = " << c1 << ", Catet2 = " << c2 << ", Hipotenusa = " << h << endl;
    }

}
