/*aquest programa  donada una quantitat de segons, diu
quantes hores, minuts i segons representa.*/
#include <iostream>
using namespace std;

int main () {
    int hores ,minuts ,segons;
    cin >> segons;
    hores = segons / 3600;
    segons = segons % 3600;
    minuts = segons / 60;
    segons = segons % 60; // El mateix que el dels bitllets
    cout << hores << " " << minuts << " " << segons << endl;
}
