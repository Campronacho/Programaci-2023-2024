/* Aquest programa al introduir un
 nombre natural, fa la suma dels quadrats*/
#include <iostream>
using namespace std;

int main() {
    int n;
    int n1 = 0;
    cin >> n;
    for (int i= 1;i <= n;++i) { // es per simplificar
        n1 += i *i; // la formula  (n * (n + 1) * (2 * n + 1)) / 6
                    // (dona problemas)
    }

    cout <<n1 << endl;
}

