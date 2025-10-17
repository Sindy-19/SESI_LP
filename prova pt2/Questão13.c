    #include <stdio.h>

    int main(){
    int numero;
    int soma = 0;
    int i =0;

    while (i < 10){
    printf("digite um numero: ");
    scanf("%d", &numero);

    if(numero >= 0){
    int soma = soma + numero; 
    i = i + 1;          
    }
    }
    printf("a sua media e: %.2f\n", soma / 10);
    }