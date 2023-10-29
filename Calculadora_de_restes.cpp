 /*Aquest programa calcula el resultat de la resta dels dos nombres que l’usuari introdueix.*/

 #include <iostream>
 using namespace std;

 int main () {
    int nombre1; //Primer Nombre.
    int nombre2; //Segon Nombre.
    int resultat; //Resultat de la suma.
    cout << "Introdueix el primer nombre : ";
    cin >> nombre1;
    cout << "Introdueix el segon nombre : ";
    cin >> nombre2;
    resultat = nombre1 - nombre2;
    cout << "El resultat de " << nombre1 << " - " << nombre2 << " = " << resultat << endl;

 }
