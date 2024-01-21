#include <iostream>
using namespace std;

int main () {
    int h, m, s, m1,s1,s2,m2,h1;
    cin >> h >> m >> s;































    m1 = m+1;
    s1 = s+1;
    s2 = (s-60)+1;
    m2 = (m-60)+1;
    h1 = h+1;

    if (s < 59 and m < 59) {
        if (h < 10 and m < 9 and s < 9) {
            cout << "0" << h << ":" << "0" << m << ":" << "0" <<  s1 << endl;
        }
        if (h < 10 and m == 9 and s == 9){
             cout << "0" << h << ":" << "0" << m << ":" <<  s1 << endl;
        }
        if (h >= 10 and m >= 9 and s >= 9 ) {
            cout << h << ":" << m << ":" << s1 << endl;
        }
        if ((not(h < 10 and m < 9)) and s != 9 and s < 9  ) {
            if (h < 10) {
                cout << "0" << h << ":" << m << ":"  << s1 << endl;
            }
            if (m < 9) {
                cout << h << ":" << "0" << m << ":" << s1 << endl;
            }
            if (s < 9){
                cout << h << ":" << m << ":" << "0" << s1 << endl;
            }
        }

    }
    if (m >= 59 and s != 59) {
        if (h < 10 and s < 9) {
            cout << "0" << h << ":" << m << ":" << "0" << s1 << endl;
        }
        if (not(h < 10 and s < 9)){
            if (h < 10) {
            cout << "0" << h << ":" << m << ":" << s1 << endl;
            }
            if (s < 9) {
            cout << h << ":" << m << ":"  << "0" << s1 << endl;
            }
        }
            if (h >= 10 and s >= 9) {
                cout << h << ":" << m2 << ":" << s1 << endl;
            }
    }

    if (s >= 59 and m != 59) {
        if (h < 10 and m < 9) {
            cout << "0" << h << ":" << "0" << m1 << ":" << "0" << s2 << endl;
        }
        if (not(h < 10 and m < 9)){
            if (h < 10) {
            cout << "0" << h << ":" << m1 << ":" << "0" << s2 << endl;
            }
            if (m < 9) {
            cout << h << ":" << "0" << m1 << ":" << "0" << s2 << endl;
            }
        }
        if (h >= 10 and m >= 9) {
            cout << h << ":" << m1 << ":" << "0" << s2 << endl;
        }
    }
    if (s == 59 and m == 59){
        if (h < 9 ) {
            cout << "0" << h1 << ":" << "0" << m2 << ":" << "0" << s2 << endl;
        }
        if (h == 23 and s == 59 and m == 59) {
            cout << "0" << (h-24)+1 << ":" << "0" << m2 << ":" << "0" << s2 << endl;
        }
        if (s == 59 and m == 59 and h >= 9 and h != 23) {
            cout << h1 << ":" << "0" << m2 << ":" << "0" << s2 << endl;
        }
    }
}
