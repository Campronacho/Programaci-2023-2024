/*Aquest programa fa servir la seqüencia de Collatz
i imprimeix quants  passos triga a arriba 1 cada n*/
#include <iostream>
using namespace std;

int main() {
    int a;
    while (cin >> a) {
        int c = 0;
        while (a != 1) {
            if (a % 2 == 0) {
                a /= 2;
            } else {
                a = a * 3 + 1;
            }
            ++c;
        }
        cout << c << endl;
    }
}
