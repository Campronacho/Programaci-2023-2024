/*aquest programa al introduir dos nombres
naturals a i b,esriu la divisio entera i
el residu*/
#include <iostream>
using namespace std;

int main () {
    int a, b, d ,r;
    cin >> a >> b;
    d = a / b;
    r = a % b;
    if (b > 0) {
        cout << d << " " << r << endl;
    }
    else {
        cout << " " << endl;
    }

}
