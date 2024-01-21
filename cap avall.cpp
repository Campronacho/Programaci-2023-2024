/*aquest programa llegeix dos nombres enters (x i y) i
escriu tots els nombres entre x i y o entre y i x, de gran a petit*/
#include <iostream>
using namespace std;

int main (){
    int x, y, aux;
    cin >> x >> y;
    if (x > y) { // intercanviem els valors ja que
        aux = x; // si no ho féssim el codi no funcionaria
        x = y;
        y = aux;
    }
    while (y >= x) {
        cout << y  << endl;
        --y;
    }


}
