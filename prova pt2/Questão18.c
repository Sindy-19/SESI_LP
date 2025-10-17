#include <stdio.h>

int maior_numero(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int a, b;

    printf("digite o primeiro numero: ");
    scanf("%d", &a);

    printf("digite o segundo numero: ");
    scanf("%d", &b);

    int maior = maior_numero(a, b);
    printf("o maior numero entre %d e %d é %d\n", a, b, maior);

}
