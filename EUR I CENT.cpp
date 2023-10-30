/* Aquest programa al introduir una quantitat d'euros i una quantitat de centims,
imptimeix el resultat dient quants bitllets ( de500€-5€) hi haurà de cada tipus i
quantes monedes (1€- 1cent) hi haurà de cada tipus*/
#include <iostream>
using namespace std;

int main () {
    int cent, eur, totalc;
    cin >> eur >> cent;
    totalc = eur * 100 + cent;
    int B500 ,B200 ,B100 ,B50 ,B20 ,B10 ,B5 ,M2 ,M1 ,M50 ,M20 ,M10 ,M5 ,M02 ,M01;
    B500 = totalc / 50000;
    totalc = totalc % 50000;
    B200 = totalc / 20000;
    totalc = totalc % 20000;
    B100 = totalc / 10000;
    totalc = totalc % 10000;
    B50 = totalc / 5000;
    totalc = totalc % 5000;
    B20 = totalc / 2000;
    totalc = totalc % 2000;
    B10 = totalc / 1000;
    totalc = totalc % 1000;
    B5 = totalc / 500;
    totalc = totalc % 500;
    M2 = totalc / 200;
    totalc = totalc % 200;
    M1 = totalc / 100;
    totalc = totalc % 100;
    M50 = totalc / 50;
    totalc = totalc % 50;
    M20 = totalc / 20;
    totalc = totalc % 20;
    M10 = totalc / 10;
    totalc = totalc % 10;
    M5 = totalc / 5;
    totalc = totalc % 5;
    M02 = totalc / 2;
    totalc = totalc % 2;
    M01 = totalc / 1;
    totalc = totalc % 1;

    cout << "Bitllets de 500 euros: " << B500 << endl;
    cout << "Bitllets de 200 euros: " << B200 << endl;
    cout << "Bitllets de 100 euros: " << B100 << endl;
    cout << "Bitllets de 50 euros: " << B50 << endl;
    cout << "Bitllets de 20 euros: " << B20 << endl;
    cout << "Bitllets de 10 euros: " << B10 << endl;
    cout << "Bitllets de 5 euros: " << B5 << endl;
    cout << "Monedes de 2 euros: " << M2 << endl;
    cout << "Monedes de 1 euro: " << M1 << endl;
    cout << "Monedes de 50 centims: " << M50 << endl;
    cout << "Monedes de 20 centims: " << M20 << endl;
    cout << "Monedes de 10 centims: " << M10 << endl;
    cout << "Monedes de 5 centims: " << M5 << endl;
    cout << "Monedes de 2 centims: " << M02 << endl;
    cout << "Monedes de 1 centim: " << M01 << endl;



}
