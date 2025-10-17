#include <stdio.h>

int maior_valor(int vetor[], int tamanho) {
    int maior = vetor[0];
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}

int main() {
    int n;

    printf("quantos elementos tem o vetor ");
    scanf("%d", &n);

    int vetor[n];

    for (int i = 0; i < n; i++) {
        printf("digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int maior = maior_valor(vetor, n);
    printf("o maior valor no vetor é %d\n", maior);
}