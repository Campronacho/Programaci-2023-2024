/* Aquest programa demana dos nombres
a l'usuari i n'imprimeix el m�s elevat
(ex: 30 i 40, el programa imprimir� 40)*/
#include <iostream>
using namespace std;

int main () {
    int a, b;
    cin >> a >> b;
    if (a < b) {
        cout << b << endl;
    }

    else {
        cout << a << endl;
    }
}

