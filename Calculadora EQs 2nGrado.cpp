#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string a, b, c;
    double x1, x2;
    double p, r;
    while(true){
        cout << "Introdueix els valors de la equacio ax^2 + bx + c = 0" << endl;
        cout << "Coeficient a: ";
        cin >> a;
        if (a =="#"){
            //Instruccions();
            break;
        }
        if (a =="A"){
            //calculadoraEquacions();
            break;
        }
        cout << "Coeficient b: ";
        cin >> b;
        if (b =="#"){
            //Instruccions();
            break;
        }
        if (b =="A"){
            //calculadoraEquacions();
            break;
        }
        if (a == "0" && b == "0") {
            cout << endl;
            cout << "Error: No poden ser els dos coeficients igual a 0!";
            cout << endl;
            continue;
        }
        cout << "Terme independet c: ";
        cin >> c;
        if (c =="#"){
            //Instruccions();
            break;
        }
        if (c =="A"){
            //calculadoraEquacions();
            break;
        }
        double (a1) = stod(a);
        double (b1) = stod(b);
        double (c1) = stod(c);
        p =(pow(b1,2));//elevar b al quadrat
        r= p-4*a1*c1;
        x1= (-b1+(sqrt(r)))/(2*a1);
        x2= (-b1-(sqrt(r)))/(2*a1);
        if (r < 0){
            cout << "Error: No es pot fer una arrel negativa!" << endl;
            continue;
        }
        else {
            cout << "El primer resultat es X1 = " << x1 << endl;
            cout << "El segon resultat es X2 = " << x2 << endl;
        }
    }

}
