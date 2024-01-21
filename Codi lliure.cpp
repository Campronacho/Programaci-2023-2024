#include <iostream>
using namespace std;
#include <string>

int main () {
    string name;
    string altura;
    string radi;
    float area;
    float volum;
    cout << "--------------------------------------------CACILAV-------------------------------------------" << endl;
    cout << endl;
    cout << "Bon dia!";
    cout << "Com et dius? ";
    cin >> name;
    cout << endl;
    cout << "Encantat " << name <<  "! Jo em dic CACILAV i et calculare el volum i l'area del teu cilindre!Pots tancar aquesta funcio amb el comandament #.Escriu A per veure aquestes instruccions de nou." << endl;
    cout << endl;
    while (true){
        cout << "Quina altura (h) te el teu cilindre? ";
        cin >> altura;
        if (altura == "#"){
            cout << endl;
            cout << "Espero que t'hagi ajudat, i espero tornarte a veure!" << endl;
            cout << endl;
            cout << "--------------------------------------------CACILAV-------------------------------------------" << endl;
            //Instruccions();
            break;
        }
        if (altura =="A"){
            //calculadoraCacilav ();
        }
        cout << "I el radi, quin es? ";
        cin >> radi;
        if (radi == "#"){
            cout << endl;
            cout << "Espero que t'hagi ajudat, i espero tornarte a veure!" << endl;
            cout << endl;
            cout << "--------------------------------------------CACILAV-------------------------------------------" << endl;
            //Instruccions();
            break;
        }
        if (radi =="A"){
            //calculadoraCacilav ();
        }
        double r = stod (radi);
        double a = stod (altura);
        volum = (3.14159265359*(r*r))* a;
        area = (2*3.14159265359*a)*(a+r);

        cout << endl;
        cout << "L'area del teu cilindre = " << area << endl;
        cout << endl;
        cout << "I el Volum del teu cilindre = " << volum << endl;
        cout << endl;
    }


}
