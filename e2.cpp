#include <iostream>
using namespace std;

int multiplicarReferencia(int (*a), int (*b));

int main() {
    int x = 5, y = 3, res;
    res = multiplicarReferencia(&x, &y);
    cout << res << endl;
}

int multiplicarReferencia(int (*a), int (*b)){
    int mult;
    mult = (*a) * (*b);
    return mult;
}