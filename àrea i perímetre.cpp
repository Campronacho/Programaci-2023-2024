/*Aquest programa demanará a l'usuari la mida d'un costat del quadrat, i li retornara el càlcul de la seva àrea i el seu perímetre*/

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
