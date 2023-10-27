#include <iostream>
using namespace std;

int somaReferencia(int (*a));

int main() {
    int x = 5, res;
    res = somaReferencia(&x);
    cout << res << endl;
}

int somaReferencia(int (*a)){
    int somar;
    somar = (*a) + 10;
    return somar;
}