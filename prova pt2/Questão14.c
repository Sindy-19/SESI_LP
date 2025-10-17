#include <stdio.h>

int main() {
    int num, soma = 0, cont = 0;

    printf("digite 10 numeors positivos\n");
    printf("sem numeros negativos\n\n");

    while (cont < 10) {
        printf("o %d  número: ", cont + 1);
        scanf("%d", &num);

        if (num > 0) {
            soma += num;
            cont++;
            printf("tenho %d numero\n", cont);
        } else {
            printf("tenta de novo\n");
        }
    }

    double media = (double)soma / 10.0;
    printf("\na média  %.2lf\n", media);
    printf("resultado  \n");

 
}