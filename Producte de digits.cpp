/*Aquest programa per a cada nombre donat, escriu el producte dels seus d�gits,
i el producte dels d�gits del producte anterior, etc�tera, fins que el producte
resultant tingui un sol d�git.*/
#include <iostream>
using namespace std;


int main() {
    int a;
    while (cin >> a) {
        if (a < 10) {
            cout << "El producte dels digits de " << a << " es " << a << "." << endl;
        }
        else {
            while (a > 9) {
                cout << "El producte dels digits de " << a << " es ";
                int p = 1;
                while (a != 0) {
                    p *= a%10;
                    a /= 10;
                }
                cout << p << "." << endl;
                a = p;
            }
        }
        cout << "----------" << endl;
    }
}
