/* Aquest programa escriu quadrats amb n^2 n's */
#include <iostream>
using namespace std;

int main() {
    int c;
    while (cin >> c) {
        for (int r = 0; r < c; ++r) {
            for (int s = 0; s < c; ++s) {
                cout << c;
            }
            cout << endl;
        }
        cout << endl; // linea en blanc
    }
}
