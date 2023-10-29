#include <iostream>
using namespace std;
#include <string>

int main () {
    string name;
    float altura;
    float radi;
    float area;
    float volum;
    cout << "--------------------------------------------CACILAV-------------------------------------------" << endl;
    cout << " " << endl;
    cout << "Bon dia!" << endl;
    cout << " " << endl;
    cout << "Com et dius? ";
    cin >> name;
    cout << " " << endl;
    cout << "Encantat " << name <<  "! Jo em dic CACILAV i et calculare el volum i l'area del teu cilindre!" << endl;
    cout << " " << endl;
    cout << "Quina altura (h) te el teu cilindre? ";
    cin >> altura;
    cout << "I el radi, quin es? ";
    cin >> radi;
    volum = (3.14159265359*(radi*radi))* altura;
    area = (2*3.14159265359*radi)*(altura+radi);
    cout << " " << endl;
    cout << "L'area del teu cilindre = " << area << endl;
    cout << " " << endl;
    cout << "I el Volum del teu cilindre = " << volum << endl;
    cout << " " << endl;
    cout << "Espero que t'hagi ajudat, i espero tornarte a veure!" << endl;
    cout << " " << endl;
    cout << "--------------------------------------------CACILAV-------------------------------------------" << endl;

}
