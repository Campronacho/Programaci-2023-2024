/* Aquest programa demana tres nombres
enters difernts a l'usuari i n'imprimeix
el més elevat(ex: 30,35 i40,el programa
imprimirà 40).*/
#include <iostream>
using namespace std;

int main () {
    int a, b ,c;
    cin >> a >> b >> c;
    if (a >= b and a > c) {
        cout << a << endl;
    }
    if (b >= a and b > c) {
        cout << b << endl;
    }
    if (c >= a and c > b) {
        cout << c << endl;
    }
}

