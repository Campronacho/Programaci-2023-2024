/*Aquest programa, demana un any natural ente 1800 i 9999 i n'imprimeix
si �s o no �s un any de trasp�s*/

#include <iostream>
using namespace std;

int main() {
    int any;
    cin >> any;
    if (any >=1800 and any <= 9999){
        if ((any % 4) == 0 and (any % 100) != 0 or (any % 400) == 0 ){ //== 0 (no t� residu)
        cout << "YES" << endl;                                     //!= 0 (t� residu)
        }
        else {
        cout << "NO" << endl;
        }
    }
    else {
        cout << "No s'admet aquest any" << endl;
    }
}
