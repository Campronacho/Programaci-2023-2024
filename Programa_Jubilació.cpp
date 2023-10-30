/* Aquest programa et demanará la teva edat i el teu nom i et dirá quants anys et quedan per la jubilació. */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    int jubilacio;
    int result;
    cout << "Com et dius? ";
    cin >> name;
    cout << "Quants anys tens? ";
    cin >> age;
    jubilacio = 65;
    result = jubilacio - age;
    cout << "Hola " << name << "! " << "Ja nomes et queden " << result << " anys per jubilar-te." << endl;







}
