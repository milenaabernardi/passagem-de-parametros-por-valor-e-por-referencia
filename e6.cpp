#include <iostream>
using namespace std;

int subtrairReferencia(int (*a));

int main() {
    int x = 5, res;
    res = subtrairReferencia(&x);
    cout << res << endl;
}

int subtrairReferencia(int (*a)){
    int diminuir;
    diminuir = (*a) - 5;
    return diminuir;
}