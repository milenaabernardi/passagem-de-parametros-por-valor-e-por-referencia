#include <iostream>
using namespace std;

int subtrairValor(int a);

int main() {
    int x = 5, res;
    res = subtrairValor(x);
    cout << res << endl;
}

int subtrairValor(int a){
    int diminuir;
    diminuir = a - 5;
    return diminuir;
}