#include <stdio.h>

int main() {

	float G;
	float R;


	printf("Conversao de angulos\n");
	printf("digite um angulo radiano: ");
	scanf("%f", &G);

	R = G * 180 /3.14;

	printf("\nResultado\n");
	printf("%.2f radianos É %.2f graus.\n", G, R);

}




