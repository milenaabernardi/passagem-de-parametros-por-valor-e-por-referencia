#include <iostream>
using namespace std;

void converterLetras(string &palavra);

int main() {
    string minhaString;
    cout << "Digite uma string: ";
    cin >> minhaString;
    converterLetras(minhaString);
    cout << minhaString << endl;
}

void converterLetras(string &palavra) {
    for (char &c : palavra) {
        if (c >= 'a' && c <= 'z') {
            c = c - 32;
        }
    }
}