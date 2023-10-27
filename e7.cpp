#include <iostream>
using namespace std;

const int tamanhoVetor = 5;

void inverterVetor(int* vetor, int tamanho);

int main() {
    int vetor[tamanhoVetor] = {1, 2, 3, 4, 5};
    inverterVetor(vetor, tamanhoVetor);

    for (int i = 0; i < tamanhoVetor; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
}

void inverterVetor(int* vetor, int tamanho) {
    int* inicio = vetor;
    int* fim = vetor + tamanho - 1;
    while (inicio < fim) {
        int temp = *inicio;
        *inicio = *fim;
        *fim = temp;
        inicio++;
        fim--;
    }
}