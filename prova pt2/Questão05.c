#include <stdio.h>

int main() {

    int numero;
    printf("digite um numero inteiro: ");

    scanf("%d", &numero);
    
    int antecessor = numero - 1;
    int sucessor = numero + 1;
    
    printf("antecessor de %d é: %d\n", numero, antecessor);
    printf("sucessor de %d é: %d\n", numero, sucessor);
 
}