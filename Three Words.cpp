/* aquest codi demana a l'usuari tres paraules, i inprimeix aquestes
 paraules en l'ordre invers: introdueix: a b c, imprimeix c b a.*/
#include <iostream>
#include <string>
using namespace std;
int main(){
    string a, b, c;
    cin >> a >> b >> c;
    cout << c << " " << b << " " << a << endl;
}
