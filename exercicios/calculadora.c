#include <stdio.h>

int SOMA() {
    int a, b;
    printf("\nDigite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("\nResultado: %d + %d = %d\n", a, b, a + b);
}

int SUBTRACAO() { 
    int a, b;
    printf("\nDigite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");     
    scanf("%d", &b);
    printf("\nResultado: %d - %d = %d\n", a, b, a - b);
} 

int MULTIPLICACAO() { 
    int a, b;
    printf("\nDigite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("\nResultado: %d x %d = %d\n", a, b, a * b);
}

int DIVISAO() { 
    float a, b; 
    printf("\nDigite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    if (b == 0) {
        printf("\nERRO Divisao por zero nao e permitida.\n");
    } else {
        printf("\nResultado: %.2f / %.2f = %.2f\n", a, b, a / b);
    }
}

int main() {
    printf("------------------\n");
    printf("-  CALCULADORA   -\n");
    printf("-[1]SOMA         -\n");
    printf("-[2]SUBTRACAO    -\n");
    printf("-[3]MULTIPLICACAO-\n");
    printf("-[4]DIVISAO      -\n");
    printf("------------------\n");

    int opcao = 0;
    printf("SELECIONE UMA DAS OPCOES: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: 
            printf("\n--- SOMA ---\n");
            SOMA();
            break;

        case 2:
            printf("\n--- SUBTRACAO ---\n");
            SUBTRACAO();
            break;

        case 3:
            printf("\n--- MULTIPLICACAO ---\n");
            MULTIPLICACAO();
            break;

        case 4:
            printf("\n--- DIVISAO ---\n");
            DIVISAO();
            break;

        default:
            printf("\nOPCAO INVALIDA\n");
    }

  
}