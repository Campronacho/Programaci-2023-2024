/*Aquest codi al introduir una hora qualsevol del
dia en format H M S, suma un segon i imprimeix el
 resultat en format HH:MM:SS i amb les repercusions
 que hagi generat la suma d'un segon*/
#include <iostream>
using namespace std;

int main () {
    int h, m, s;
    cin >> h >> m >> s;

    s = s+1;
    if (s > 59) {
        m = m+1;
        s = s % 60;
        if (m > 59) {
            h = h+1;
            m = m % 60;
            if (h > 23) {
                h = h % 24;
            }
        }
    }
    cout << (h < 10 ? "0" : "") << h << ":";
    cout << (m < 10 ? "0" : "") << m << ":";
    cout << (s < 10 ? "0" : "") << s << endl;
}
