/*aquest programa llegeix una text acabats amb un # i escriu quantes comes, punts, interrogants i exclamacions conté.*/
#include <iostream>
using namespace std;

int main () {
    char a;
    int r = 0; // !
    int f = 0; // ¿
    int h = 0; // .
    int k = 0; // ,
    cout << "|-----------------------------------------------------------------------------------|" << endl;
    cout << "|---------------Contador de comes, punts, interrogants i exclamacions---------------|"  << endl;
    cout << "|-----------------------------------------------------------------------------------|" << endl;
    cout << "      1.Introdueix el teu text: " << endl;

    while (cin >> a and a != '#'){
        if (a == '!' or a == '¡'){
            ++r;
        }
        if (a == '¿' or a == '?'){
            ++f;
        }
        if (a == '.'){
            ++h;
        }
        if (a == ','){
            ++k;
        }
    }
    cout << " " << endl;
    cout <<"      2.Disfruta d'aquest contador!" << endl;
    cout << "|-----------------------------------------------------------------------------------|" << endl;
    cout << "|Hi ha " << r << " signes d'exclamacio en aquest text                                         |" << endl;
    cout << "|-----------------------------------------------------------------------------------|" << endl;
    cout << "|Hi ha " << f << " interrogants en aquest text                                                |" << endl;
    cout << "|-----------------------------------------------------------------------------------|" << endl;
    cout << "|Hi ha " << h << " punts en aquest text                                                       |" << endl;
    cout << "|-----------------------------------------------------------------------------------|" << endl;
    cout << "|Hi ha " << k << " comes en aquest text                                                       |" << endl;
    cout << "|-----------------------------------------------------------------------------------|" << endl;
}








