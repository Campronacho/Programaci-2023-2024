/*Aquest donat un nombre (n), escriu un rombe de mida (n).*/
#include <iostream>
using namespace std;

int main() {
    int a;
    cin >>a;
    for (int c =1; c<= a; ++c) {

        for (int n = 1; n <= a -c; ++n) {
            cout << " ";
        }
        for (int s = 1; s <= 2* c -1; ++s) {
            cout <<'*';
            }

        cout << endl;
    }
    for (int c= a - 1; c >= 1; --c) {
        for (int n = 1; n <= a -c; ++n) {
            cout << " ";
        }
        for (int s = 1; s <= 2* c -1; ++s) {
            cout <<'*';
            }

        cout << endl;
    }
}
