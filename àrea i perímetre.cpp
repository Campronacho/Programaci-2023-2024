/*Aquest programa demanar� a l'usuari la mida d'un costat del quadrat, i li retornara el c�lcul de la seva �rea i el seu per�metre*/

#include <iostream>
using namespace std;

int main () {
    int number;
    int area;
    int perimeter;
    cout << "Introdueix un costat del quadrat: ";
    cin >> number;
    area = number*number;
    perimeter = 4*number;
    cout << "L'area d'aquest quadrat = " << area << endl;
    cout << "I el perimetre d'aquest quadrat = " << perimeter << endl;



}
