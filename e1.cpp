#include <iostream>
using namespace std;

int multiplicarValor(int a, int b);

int main() {
    int x = 5, y = 3, res;
    res = multiplicarValor(x, y);
    cout << res << endl;
}

int multiplicarValor(int a, int b){
    int mult;
    mult = a * b;
    return mult;
}