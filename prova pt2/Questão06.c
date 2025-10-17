#include <stdio.h>

int main() {
    int numeroemes;
 
    printf("digite um numero inteiro entre 1 e 12: ");

    scanf("%d", &numeroemes);


    switch (numeroemes) {
        case 1:
            printf("O mes é: janeiro\n");
            
        case 2:
            printf("O mes é: fevereiro\n");
            break;
            
        case 3:
            printf("O mes é: marco\n");
            break;
            
        case 4:
            printf("O mes é: abril\n");
            break;
            
        case 5:
            printf("O mes é: maio\n");
            break;
            
        case 6:
            printf("O mes é: junho\n");
            break;
            
        case 7:
            printf("O mes é: julho\n");
            break;
            
        case 8:
            printf("O mes é: agosto\n");
            break;
            
        case 9:
            printf("O mes é: setembro\n");
            break;
            
        case 10:
            printf("O mes é: outubro\n");
            break;
            
        case 11:
            printf("O mes é: novembro\n");
            break;
            
        case 12:
            printf("O mes é: dezembro\n");
            break;
            
      
        default:
            printf("ERRO mes não existe\n");
            break;
    }
 
}