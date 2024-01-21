/*Aquest programa llegeix diversos nombres i de cadascun escriu la
suma dels digits*/
#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int s = 0;
        int c = n;

        while (c != 0) {
            s += c % 10;
            c /= 10;
        }
        cout << "La suma dels digits de " << n << " es " << s << "." << endl;
    }
}
