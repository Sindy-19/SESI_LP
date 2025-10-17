#include <stdio.h>

int main() {
 
    float numero1;
    float numero2;

    printf("digite o primeiro numero: ");
 
    scanf("%f", &numero1);

    printf("digite o segundo numero: ");
    scanf("%f", &numero2);

    if (numero1 > numero2) {
     
        printf("o primeiro numero %.2f e o maior.\n", numero1);
    } else if (numero2 > numero1) {
     
        printf("o segundo numero %.2f e o maior.\n", numero2);
    } else {
     
        printf("numeros iguais.\n");
    }

}