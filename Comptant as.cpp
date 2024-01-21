/*aquest programa llegeix una seqüència de caràcters acabats
 en punt i escriu quantes lletres "a" conté.*/
#include <iostream>
using namespace std;

int main () {
    char a;
    int r = 0;
    while (cin >> a and a != '.'){
        if (a == 'a'){
            ++r;
        }
    }
        cout << r << endl;
}


