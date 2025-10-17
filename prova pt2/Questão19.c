#include <stdio.h>


void desenhaLinha(int tamanho) {
	for (int i = 0; i < tamanho; i++) {
		printf("=");
	}
	printf("\n");
}


int main() {
	int n;

	printf("quantos sinais de igual voce quer na linha? ");
    if (scanf("%d", &n) != 1) {
        
        printf("Entrada invalida.\n");
        return 1;
    }


	desenhaLinha(n);

}