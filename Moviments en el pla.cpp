/*Aquest programa donada  una seqüència de caràcters,
cadascun dels quals codifica un moviment , calcularà  la
posició final d’un objecte que inicialment es troba a la
posició (0, 0)*/

#include <iostream>
using namespace std;

int main() {
    int y = 0;
    int x = 0;
    char c;
    while (cin >> c and c != '.') {
        if (c == 'n') {
            --y;
        }
        if (c == 's') {
            ++y;
        }
        if (c == 'e') {
            ++x;
        }
        if (c == 'o') {
            --x;
        }
    }
    cout << "(" << x << ", " << y << ")" << endl;

}
