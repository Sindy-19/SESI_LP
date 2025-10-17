#include <stdio.h>

int main() {
    int idade;

    printf("digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("senior\n");
    }
    else if (idade >= 14) {
        printf("juvenil B\n");
    }
    else if (idade >= 11) { 
        printf("juvenil A\n");
    }
    else if (idade >= 8) { 
        printf("infantil B\n");
    }
    else if (idade >= 5) {  
        printf("infantil A\n");
    }
    else { 
        printf("não existe\n");
    }


}