#include <iostream>
using namespace std;

int somaValor(int a);

int main() {
    int x = 5, res;
    res = somaValor(x);
    cout << res << endl;
}

int somaValor(int a){
    int somar;
    somar = a + 10;
    return somar;
}