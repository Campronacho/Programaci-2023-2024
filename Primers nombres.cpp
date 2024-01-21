/*Aquest programa llegeix un nombre n,
 i  escriu tots els nombres entre 0 i n.*/
#include <iostream>
using namespace std;

int main () {
    int a;
    cin >> a;
    int c = 0;
    if (a >= 0){
        while ( c <= a){
            cout << c << endl;
            ++c;
        }
    }
}
