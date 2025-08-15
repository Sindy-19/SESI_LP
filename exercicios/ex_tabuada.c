#include <stdio.h>
int main()
{
  int taboada = 0;
  int i;
    printf("Digite o numero da taboada: ");
    scanf("%d", &taboada);
    for(i = 0; i <= 10; i=i + 1){
    printf("\n%d x %d = %d", i, taboada, i * taboada);
}

}
