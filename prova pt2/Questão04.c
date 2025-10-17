#include <stdio.h>

int main() {

    float k;
    float l;
    
     printf("conversor de quilogramas \n");
    printf("digite o valor em quilos: ");
    
    
    scanf("%f", &k);
  
    l = k * 0.45;
   
  printf("\nResultado\n");
    printf("quilogramas é %.2f KG é %.2f libras\n", k, l);
    
 
}

