#include <stdio.h>
void main(){
    
int dias_semana = 0;

printf("digite o dia da semama:");
scanf("%d" , &dias_semana);

switch(dias_semana){
    case 1 :printf("\n domingo");
    break;
    case 2 :printf("\n segunda");
    break;
    case 3 :printf("\n terça");
    break;
    case 4 :printf("\n quarta");
    break;
    case 5 :printf("\n quinta");
    break;
    case 6 :printf("\n sexta");
    break;
    case 7 :printf("\n sabado");
    break;
    default:
    printf("\n esse dia não existe tente novamente");
}
    
    
    
    
    
    
    
    
    
}




