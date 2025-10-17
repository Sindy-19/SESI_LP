#include <stdio.h>

int main() {
  
    int numero1;
    int numero2;

  
    printf("digite o primeiro número inteiro: ");

    scanf("%d", &numero1);

   
    printf("digite o segundo número inteiro: ");
   
    scanf("%d", &numero2);

 
    if (numero1 > numero2) {
        printf("o maior número é: %d\n", numero1);
    }
 
    else if (numero2 > numero1) {
        printf("o maior número é: %d\n", numero2);
    }
  
    else {
        printf("os números são iguais.\n");
    }
}