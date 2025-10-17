#include <stdio.h>

int main() {
 
    int contador = 0;
    while (contador <= 100000) {
        printf("valor atual: %d\n", contador);
        contador = contador + 1000;
       
    }
    printf("\no valor final chegou em 100000 (cem mil)\n");
}