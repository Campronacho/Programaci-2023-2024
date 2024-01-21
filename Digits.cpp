/*aquest programa llegeix un nombre i escriu el nombre de dígits.*/
#include <iostream>
using namespace std;

int main () {
    int n, i;
    cin >> n;
    i = 1;
    cout << "El nombre de digits de " << n << " es ";
    while (n > 9){
        n = n/10;
        ++i;
    }
    cout <<  i << "." << endl;
}
