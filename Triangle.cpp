/*Aquest donat un nombre (n), escriu un triangle de mida (n).*/
#include <iostream>
using namespace std;

int main () {
    int t;
    cin >> t;
    for (int r = 0; r < t; ++r){
        for(int s = 0; s<= r; ++s)
            cout << '*';
        cout << endl; // no s'imprimia b� perque faltava aquesta linea
        }             // li he preuguntat a chatGPT perque no s'imprimia b�
                      // i m'ha resolt el problema
}



