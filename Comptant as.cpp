/*aquest programa llegeix una seq��ncia de car�cters acabats
 en punt i escriu quantes lletres "a" cont�.*/
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


