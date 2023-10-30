/*Aquest programa al introduir una temperatura,
diu si fa calor, s'esta be o fa fred. Adicionalment,
quant la temperatura es superior o igual a 100ºC diu
que fa calor i que l'aigua bulluiria, aixi mateix si
la temp es igual o inferior a 0ºC diu que fa fred i
que l'aigua es gelaria.*/
#include <iostream>
using namespace std;

int main () {
    int temp;
    cin >> temp;
    if (temp <= 30 and temp >= 10) {
        cout << "s'esta be" <<endl;
    }
    if (temp > 30) {
        cout << "fa calor" << endl;
    }
    if (temp < 10) {
        cout << "fa fred" << endl;
    }
    if (temp >= 100){
        cout << "l'aigua bulliria" << endl;
    }
    if (temp <= 0) {
        cout << "l'aigua es gelaria" << endl;
    }

}
