#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 15) {
        printf("Você é jovem.\n");
    } else if (idade >= 15 && idade <= 20) {
        printf("Você está na adolescência.\n");
    } else if (idade > 20 && idade <= 50) {
        printf("Você é adulto.\n");
    } else { 
        printf("Você é velho.\n");
    }

    return 0;
}