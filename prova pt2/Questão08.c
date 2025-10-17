#include <stdio.h>

int main() {
	float antigo;
	float novo;
	float aumento;
	
	printf("digite o preco antigo do produto: ");
	scanf("%f", &antigo);


	if (antigo <= 50.00) {
		aumento = 0.05; 
	} else if (antigo <= 100.00) {
       
		aumento = 0.10; 
	} else {
      
		aumento = 0.15; 
	}

	novo = antigo * (1 + aumento);
	

	printf("Preco Antigo: R$%.2f\n", antigo);
	printf("Aumento de: %.0f%%\n", aumento * 100);
	printf("Preco Novo: R$%.2f\n", novo);

	printf("Mensagem: ");
	if (novo <= 55.00) {
		printf("novo preco\n");
	} else if (novo <= 115.00) {
       
		printf("preco ajustado\n");
	} else {
       
		printf("valor alto\n");
	}
    
 
}