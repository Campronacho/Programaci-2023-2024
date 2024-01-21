/*aquest programa llegeix una seqüència de nombres
i n'escriu la mitjana.*/
#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    double a;
    double s = 0;
    int t = 0;
    while (cin >> a ){
        s = s+a;
        ++t;
    //cout << s << endl;
    }
    if (t>0){
        double m = s/t;
        cout << fixed << setprecision(2) << m << endl;
    }
}
