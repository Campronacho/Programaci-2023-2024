#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

void Instruccions(){
    /*Aquest programa, imprimeix el men� principal amb un diseny atractiu*/
    cout << "  |--------------------------------------------------|" << endl;
    cout << "  |   Benvingut/da a la Calculadora Multifuncional!  |" << endl;
    cout << "  |--------------------------------------------------|" << endl;
    cout << endl;
    cout << "    |---------------------------------------------|"   << endl;
    cout << "    |       Selecciona una opcio:                 |   "<< endl;
    cout << "    |---------------------------------------------|"   << endl;
    cout << "    | 1: Calculadora aritmetica basica            |   "<< endl;
    cout << "    |---------------------------------------------|"   << endl;
    cout << "    | 2: Calculador de potencies                  |   "<< endl;
    cout << "    |---------------------------------------------|"   << endl;
    cout << "    | 3: Calculadora d'arrels                     |   "<< endl;
    cout << "    |---------------------------------------------|"   << endl;
    cout << "    | 4: Calculadora de logaritmes                |   "<< endl;
    cout << "    |---------------------------------------------|"   << endl;
    cout << "    | 5: Calculadora d'equacions segon grau       |   "<< endl;
    cout << "    |---------------------------------------------|"   << endl;
    cout << "    | 6: Calculadora de pitagores                 |"   << endl;
    cout << "    |---------------------------------------------|"   << endl;
    cout << "    | 7: CACILAV (volum i area d'un cilindre)     |"   << endl;
    cout << "    |---------------------------------------------|"   << endl;
    cout << "    | #: Fi de programa                           |   "<< endl;
    cout << "    |---------------------------------------------|"   << endl;
    cout << endl;
    cout << "  |--------------------------------------------------|" << endl;
    cout << "  | Escriu A per veure aquestes instruccions de nou. |" << endl;
    cout << "  |--------------------------------------------------|" << endl;
}

void calculadoraAritmetica(){
    /*Calculadora b�sica, suma, resta, multiplicai�, divisi�*/
    cout << endl;
    cout << "Has seleccionat la Calculadora aritmetica basica." << endl;

    double n1, n2;
    char a;

    while (true) {
        cout << endl;
        cout << "Indica la teva operacio: suma (S), resta (R), multiplicacio (M), o divisio (D). Pots tancar aquesta funcio amb el commandament # . Escriu A per veure aquestes instruccions de nou." << endl;
        cin >> a;

        if (a == '#') {//tornar men� principal
            Instruccions();
            break;
        }
        if (a == 'A') { //tornar a mostrar instruccions
            calculadoraAritmetica();
            break;
        }

        // Verificar que 'a' sigui correcte
        if (!(a == 'S' || a == 'R' || a == 'M' || a == 'D')) {//tractar errors
            cout << "Error: Operacio no reconeguda." << endl;
            continue;
        }
        //Llegir els nombres
        cout << "Introdueix el primer nombre: ";
        cin >> n1;
        cout << "Introdueix el segon nombre: ";
        cin >> n2;
        cout << fixed << setprecision(2); //decimals
        // Realitzar l'operaci� corresponent (m�s senzill si fas una nova variable que es digui result)
        if (a == 'S') {
            cout << "El resultat de l'operacio " << n1 << " + " << n2 << " es: " << n1 + n2 << endl;//f�rmula
        }
        else if (a == 'R') {
            cout << "El resultat de l'operacio " << n1 << " - " << n2 << " es: " << n1 - n2 << endl;//f�rmula
        }
        else if (a == 'M') {
            cout << "El resultat de l'operacio " << n1 << " * " << n2 << " es: " << n1 * n2 << endl;//f�rmula
        }
        else if (a == 'D') {
            if (n2 == 0) {//tractar errors
                cout << "No es pot dividir entre zero!" << endl;
                continue;
            }
            else {
                cout << "El resultat de l'operacio " << n1 << " / " << n2 << " es: " << n1 / n2 << endl;//f�rmula
            }
        }
    }
}


void calculadoraPotencies(){
    /*Calcula potencies tenit en compte la base i l'exponent introdu�ts per el/la usuari/a*/
    cout << "Has seleccionat la Calculadora de potencies." << endl;
    cout << endl;
    cout << "Indica la base seguida de l'exponent. Pots tancar aquesta funcio amb el comandament #. Escriu A per veure aquestes instruccions de nou." << endl;
    cout << endl;
       string a, b;
    double p; // Cambi� el tipo de dato a double para manejar potencias fraccionarias
    while (true) {
        cout << "Introdueix la base: ";
        cin >> a;
        if (a == "#") {//tornar men� principal
            Instruccions();
            break;
        }
        if (a == "A" ) {//tornar a mostrar instruccions
            calculadoraPotencies();
            break;
        }
        cout << "Introdueix l'exponent: ";

        cin >> b;
        cout << endl;


        if (b == "#") {//tornar men� principal
            Instruccions();
            break;
        }
        if (b == "A" ) {//tornar a mostrar instruccions
            calculadoraPotencies();
            break;
        }
        double base = stod(a);
        double exponent = stod(b);
        if (exponent == 0) {
            p = 1;
        }
        else {
            int c = 1;
            p = 1.0; // potencies fraccionarias
            double bs = (exponent > 0) ? base: 1.0/base; // depenent de si es negatiu o positiu multiplicarem o dividirem
            while (c <= (exponent >0 ? exponent:-exponent)) {
                p *= bs;
                ++c;
            }
        }
        cout << base <<"^"<< exponent << " = " << p << endl; //imprimir resulatat
        cout << endl;
        cout << "Escriu A per veure les instruccions de nou. O segueix operant.Pots tancar aquesta funcio amb el comandament #."<< endl;
        cout << endl;
    }

}
void calculadoraArrels(){
    /*Calcula les arrel tenint en compte el radicand i l'index de l'arrel intrdoduïts per el/la usuari/a*/
    cout << "Has seleccionat la Calculadora d'Arrels." << endl;
    cout << endl;
    cout << "Introdueix el radicand i l'index. Pots tancar aquesta funcio amb el comandament #. Escriu A per veure aquestes instruccions de nou." << endl;
    string rd;
    string e;

    while (true) {
        cout << endl;
        cout << "Introdueix el radicand: ";
        cin >> rd;
        cout << endl;
        if (rd == "#") {//tornar men� principal
            Instruccions();
            break;
        }
        if (rd == "A") {//tornar a mostrar instruccions
            calculadoraArrels();
            break;
        }
        if (rd < "0"){//tractar errors
            cout << "Error: El radicand no pot ser negatiu! Escriu A per veure les instruccions de nou." << endl;
            continue;
        }
        if (rd == "0") {//tractar errors
            cout << "Error: El radicand no pot ser 0! Escriu A per veure les instruccions de nou." << endl;
            continue;
        }

        cout << "Introdueix l'index: ";
        cin >> e;
        if (e == "#") {//tornar men� principal
            Instruccions();
            break;
        }
        if (e == "A") {//tornar a mostrar instruccions
            calculadoraArrels();
            break;
        }
        double rad = stod(rd);
        double exp = stod(e);

        if (exp < 0) {//tractar errors
            cout << "Error: L'index ha de ser un nombre enter positiu." << endl;
            continue;
        }
        double r = pow(rad, 1.0 / exp);//de la llibreria cmath i la //f�rmula perque funcioni (sqrt() nom�s fa l'arrel cuadrada) d'aquesta manera podem aconseguir els resultats demanats.
        if (e == "2"){
            cout << endl;
            cout << "L'arrel quadrada de " << rd << " es: " << r << endl;//imprimir resulatat
            cout << endl;
        }
        else if (e == "3"){
            cout << endl;
            cout << "L'arrel cubica de " << rd << " es: " << r << endl;//imprimir resulatat
            cout << endl;
        }
        else{
        cout << endl;
        cout << "L'arrel " << e <<  "a  de " << rd << " es: " << r << endl;//imprimir resulatat
        cout << endl;
        }
    }

}
void calculadoraLogaritmes(){
    /*Aquesta calculadora nom�s calcula logaritmes, no logaritmes neperians ja que  no els hem treballat a l'escola.*/
    cout << "Has seleccionat la calculadora de logaritmes!" << endl;
    cout << endl;
    cout << "Introdeix el numero i la base en els llocs corresponents indicats pel programa.Pots tancar aquesta funcio amb el comandament #. Escriu A per veure aquestes instruccions de nou." << endl;
    cout << endl;
    string n, b;

    while (true) {
        cout << "Introdueix el numero: ";
        cin >> n;
        if (n == "#" ) { //tornar men� principal
            Instruccions();
            break;
        }
        if (n[0] == 'A') {//tornar a mostrar instruccions
            calculadoraLogaritmes();
            break;
        }
        cout << "Introdueix la base del logaritme: ";
        cin >> b;
        cout << endl;

        if (b == "#" ) { //tornar men� principal
            Instruccions();
            break;
        }
        if (b[0] == 'A') {//tornar a mostrar instruccions
            calculadoraLogaritmes();
            break;
        }

        double s = stod(n);
        double x = stod(b);
        double logb10 = log10(stod(n));//f�rmula
        double logn = log(stod(n)) / log(stod(b));//f�rmula

        if (s < 0 or x == 1 or x <= 0) { //tractar errors
            cout << "Error: Un logaritme no pot tenir base negativa o igual a 1 o 0! Tampoc pots fer el logaritme d'un numero negatiu!" << endl;
            continue;
        } else if (s == 0) {//tractar errors
            cout << "Error: El logaritme de 0 no te solucio" << endl;
            continue;
        }

        cout << "Logaritme en base 10: " << logb10 << endl;//imprimir resulatat
        cout << "Logaritme en base " << b << ": " << logn << endl;//imprimir resulatat
        cout << endl;
    }
}
void calculadoraEquacions (){
    //No he aconseguit treure la soluci�, tots els codis eren erronis poso una versi� que calcula equacions de 2nGrau per no deixar-ho buit.
    /*Aquesta calculadora depenent dels coeficients i el terme independent introduïts per l'usari/a calcula les dues solucions, a través de
    la formula*/
    string a, b, c;
    double x1, x2;
    double p, r;
    while(true){
        cout<< endl;
        cout <<"Has seleccionat la calculadora d'equacions de segon grau!" << endl;
        cout << endl;
        cout << "Introdueix els valors de la equacio ax^2 + bx + c = 0 (sense la x).Pots tancar aquesta funcio amb el comandament #.Escriu A per veure aquestes instruccions de nou." << endl;
        cout<< endl;
        cout << "Coeficient a: ";
        cin >> a;
        if (a =="#"){
            Instruccions();
            break;
        }
        if (a =="A"){
            calculadoraEquacions();
            break;
        }
        cout << "Coeficient b: ";
        cin >> b;
        if (b =="#"){
            Instruccions();
            break;
        }
        if (b =="A"){
            calculadoraEquacions();
            break;
        }
        if (a == "0" && b == "0") {//tractar errors
            cout << endl;
            cout << "Error: No poden ser els dos coeficients igual a 0!" << endl;
            cout << endl;
            continue;
        }
        cout << "Terme independet c: ";
        cin >> c;
        if (c =="#"){
            Instruccions();
            break;
        }
        if (c =="A"){
            calculadoraEquacions();
            break;
        }
        double (a1) = stod(a);
        double (b1) = stod(b);
        double (c1) = stod(c);
        p =(pow(b1,2));//elevar b al quadrat
        r= p-4*a1*c1;
        x1= (-b1+(sqrt(r)))/(2*a1);//F�rmula
        x2= (-b1-(sqrt(r)))/(2*a1);//f�rmula
        if (r < 0){//tractar errors
            cout << endl;
            cout << "Error: No es pot fer una arrel negativa!" << endl;
            cout << endl;
            continue;
        }
        else {
            cout << "El primer resultat es X1 = " << x1 << endl;//imprimir resulatat
            cout << "El segon resultat es X2 = " << x2 << endl;//imprimir resulatat
        }
    }

}
void calculadoraPitagores (){
    /*Aquest calculadora aplica el teorema de pitagores per calcular el cate o la hipotenusa, depenet del que vulgui el/la usuari/a*/
    string a;
    cout << endl;
    cout << "Has seleccionat la calculadora de Teorema de Pitagores!" << endl;
    cout << endl;
    cout << "Indica que vols calcular:la mida del catet (C) o la de la hipotenusa (H).Recorda que els catets no poden ser mes grans que la hipotenusa. Pots tancar aquesta funcio amb el comandament #. Escriu A per veure aquestes instruccions de nou." << endl;
    cin >> a;

    while (true) {
        if (a == "#") {//tornar men� inicial
            Instruccions();
            break;
        }
        if (a == "A") {//tornar a mostrar instruccions
            calculadoraPitagores();
            break;
        }

        string c1, c2, h;

        if (a == "H") {
            cout << endl;
            cout << "Vols calcular la hipotenusa. Introdueix la mida dels catets. Escriu A per tornar a veure les instruccions inicials." << endl;
            cout << endl;
            cout << "Catet 1: ";
            cin >> c1;
            cout << "Catet 2: ";
            cin >> c2;
            cout << endl;
            if (c1 == "A" or c2 == "A") {//Tornar a mostrar instruccions
                calculadoraPitagores();
                break;
            }
            if (c1 == "#" or c2 == "#") {//tornar al men� inicial
                Instruccions();
                break;
            }
            double c = stod(c1);
            double c4 = stod(c2);
            double hi = sqrt(c * c + c4 * c4);
            cout << fixed << setprecision(2);  // decimals
            cout << "Catet 1 = " << c << ", Catet 2 = " << c4 << ", Hipotenusa = " << hi << endl;//imprimir resulatat
            continue;
        }
        else if (a == "C") {
            cout << endl;
            cout << "Vols calcular el catet. Introdueix la mida de l'altre catet i de la hipotenusa.Escriu A per tornar a veure les instruccions inicials." << endl;
            cout << endl;
            cout << "Catet: ";
            cin >> c1;
            cout << "Hipotenusa: ";
            cin >> h;
            if (c1 == "A" or h == "A") {//Tornar a mostrar instruccions
                calculadoraPitagores();
                break;
            }
            if (c1 == "#" or h == "#") {//tornar al men� inicial
                Instruccions();
                break;
            }
            double c = stod(c1);
            double hi = stod(h);
            if (c > hi) {//tractar errors
                cout << "Error: els catets no poden ser mes grans que la hipotenusa! Escriu A per veure les instruccions de nou." << endl;
                continue;
            }
            double c4 = sqrt(hi * hi - c * c);
            cout << fixed << setprecision(2);  // decimals
            cout << "Catet = " << c << ", Hipotenusa = " << hi << ", Catet 2 = " << c4 << endl;//imprimir resulatat
            continue;

        }
        else {//tractar errors
            cout << "Error: valor incorrecte." << endl;
            continue;
        }
    }
}
void calculadoraCacilav(){
    /*aquesta calculadora calcula el volum i l'area d'un cilindre depenet del radi i l'altura, introdu�des per l'usuari/a*/
    string name;
    string altura;
    string radi;
    float area;
    float volum;
    cout << "--------------------------------------------CACILAV-------------------------------------------" << endl;
    cout << endl;
    cout << "Em dic CACILAV i et calculare el volum i l'area del teu cilindre!Pots tancar aquesta funcio amb el comandament #.Escriu A per veure aquestes instruccions de nou." << endl;
    cout << endl;
    while (true){
        cout << "Quina altura (h) te el teu cilindre? ";
        cin >> altura;

        if (altura == "#"){ //tornar al men� inicial
            cout << endl;
            cout << "Espero que t'hagi ajudat, i espero tornarte a veure!" << endl;
            cout << endl;
            cout << "--------------------------------------------CACILAV-------------------------------------------" << endl;
            Instruccions();
            break;
        }
        if (altura =="A"){ //tornar a mostrar instruccions
            calculadoraCacilav ();
            break;
        }
        cout << endl;
        cout << "I el radi, quin es? ";
        cin >> radi;
        if (radi == "#"){//tornar al men� inicial
            cout << endl;
            cout << "Espero que t'hagi ajudat, i espero tornarte a veure!" << endl;
            cout << endl;
            cout << "--------------------------------------------CACILAV-------------------------------------------" << endl;
            Instruccions();
            break;
        }
        if (radi =="A"){//tornar a mostrar instruccions
            calculadoraCacilav ();
            break;
        }
        double r = stod (radi);
        double a = stod (altura);
        volum = (3.14159265359*(r*r))* a;
        area = (2*3.14159265359*a)*(a+r);

        cout << endl;
        cout << "L'area del teu cilindre = " << area << endl;//imprimir resultat
        cout << endl;
        cout << "I el Volum del teu cilindre = " << volum << endl;//imprimir resultat
        cout << endl;
    }

}
int main() {// es posa aqu� perque les variables ja han sigut decalarades i �s com funciona la funci� void
    /*Base del men� depenet del n�mero o car�cter introdu�t per el/la usuari/a s'activa una funci� o una altra*/
    string op;
    Instruccions();

    while (true) {
        cin >> op;

        if (op == "1") {
            calculadoraAritmetica();
        }
        else if (op == "2") {// Cal utilitzar else if perque funcioni b�!
            calculadoraPotencies();
        }
        else if (op == "3"){
            calculadoraArrels();
        }
        else if (op == "4"){
            calculadoraLogaritmes();
        }
        else if (op == "5"){
            calculadoraEquacions();
        }
        else if (op == "6"){
            calculadoraPitagores();
        }
        else if (op == "7"){
            calculadoraCacilav();
        }
        else if (op == "A") {
            Instruccions();
        }
        else if (op == "#" or op == "0") {
            cout << "Fi del programa. Adeu i gracies!" << endl;
            break;
        }
        else {
            cout << "Error: Valor incorrecte. Si us plau, introdueix un valor valid." << endl;
            cout << "Escriu 'A' per veure les instruccions de nou." << endl;
        }
    }
}
