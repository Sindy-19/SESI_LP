#include <stdio.h>

int main() {

    float C;   
    float F;


    printf("Conversão de temperaturas\n");
    printf("digite a temperatura em celsius:");
    scanf("%f", &C);
    
    F = C*(9.0 / 5.0) + 32.0;

    printf("\nResultado\n");
    printf("A temperatura de %.2f graus Celsius é: %.2f graus Fahrenheit\n", C, F);
 
}