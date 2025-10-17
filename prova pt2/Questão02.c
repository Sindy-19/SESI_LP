#include <stdio.h>

int main() {

	float K;
	float M;


	printf("Conversao de velocidade\n");
	printf("digite a velocidade em km/h: ");
	scanf("%f", &K);

	M = K / 3.6;

	printf("\nResultado\n");
	 printf("%.2f km/h é %.2f m/s.\n", K, M);

}




